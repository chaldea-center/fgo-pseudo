void __fastcall RecommendSupportQuestBoardListViewManager___ctor(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.slideOutPosX = 784.0;
  *(_QWORD *)&this->fields.warArrangementPitchY = 0xFFFFFF69FFFFFF8ALL;
  *(_QWORD *)&this->fields.intoTime = 0x3E8000003F000000LL;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v25; // x1
  __int64 v26; // x2
  RecommendSupportQuestBoardListViewItem_o *v27; // x26
  const MethodInfo *v28; // x4
  TitleInfoControl_o *titleInfo; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  struct System_Collections_Generic_List_int__array *selectWarIdData; // x19
  __int64 v41; // x1
  __int64 headerBgImg_low; // x8
  int32_t hierarchyIndex; // w1
  UnityEngine_Object_o *scrollBar; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  struct UIScrollBar_o *v47; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v48; // x22
  System_Predicate_object__o *v49; // x23
  Il2CppObject *v50; // x0
  int32_t kind; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49F8727 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      folderInfos);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Find__, v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__,
      v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&System_Predicate_ListViewItem__TypeInfo, v14);
    sub_1B640C8(&RecommendSupportQuestBoardListViewItem_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v16);
    sub_1B640C8(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0__CreateChapterList_b__0__, v17);
    sub_1B640C8(&RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_15120/*"UpdateScrollPosition"*/, v19);
    byte_49F8727 = 1;
  }
  kind = 0;
  v20 = sub_1B64314(
          RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_TypeInfo,
          folderInfos,
          *(_QWORD *)&selectWarId);
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
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        v27 = (RecommendSupportQuestBoardListViewItem_o *)sub_1B64314(
                                                            RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                            v25,
                                                            v26);
        RecommendSupportQuestBoardListViewItem___ctor(
          v27,
          v22,
          (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)Item,
          0LL,
          v28);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v34 = itemList->fields._size;
        if ( (unsigned int)v34 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v27,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + v34;
          itemList->fields._size = v34 + 1;
          v35[4] = (Il2CppClass *)v27;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v27, v30, v31);
        }
        if ( size == ++v22 )
          goto LABEL_12;
      }
LABEL_37:
      sub_1B64324(titleInfo);
    }
  }
LABEL_12:
  v36 = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)folderInfos, (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  this->fields.currentFolderInfoData = v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentFolderInfoData, (int32_t)v36, v37, v38);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_37;
  titleInfo = (TitleInfoControl_o *)TitleInfoControl__TryGetTerminalTitleKind(titleInfo, selectWarId, &kind, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_37;
  v39 = ((unsigned __int8)titleInfo & 1) != 0 ? kind : 91;
  TitleInfoControl__setTitleImg(this->fields.titleInfo, v39, 0, 0, 0LL);
  selectWarIdData = this->fields.selectWarIdData;
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo || !selectWarIdData )
    goto LABEL_37;
  headerBgImg_low = SLODWORD(titleInfo->fields.headerBgImg);
  if ( (unsigned int)headerBgImg_low >= selectWarIdData->max_length )
    sub_1B6432C(titleInfo, v41);
  titleInfo = (TitleInfoControl_o *)selectWarIdData->m_Items[headerBgImg_low];
  if ( !titleInfo )
    goto LABEL_37;
  hierarchyIndex = this->fields.hierarchyIndex;
  titleInfo = SLODWORD(titleInfo->fields.m_CancellationTokenSource) <= hierarchyIndex
            ? 0LL
            : (TitleInfoControl_o *)System_Collections_Generic_List_int___get_Item(
                                      (System_Collections_Generic_List_int__o *)titleInfo,
                                      hierarchyIndex,
                                      (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
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
      v47 = this->fields.scrollBar;
      if ( !v47 )
        goto LABEL_37;
      if ( v47->fields.mSize <= 0.98 )
      {
        v48 = this->fields.itemList;
        v49 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_ListViewItem__TypeInfo, v45, v46);
        System_Predicate_object____ctor(
          v49,
          (Il2CppObject *)v20,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0__CreateChapterList_b__0__,
          0LL);
        if ( !v48 )
          goto LABEL_37;
        v50 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v48,
                (System_Predicate_T__o *)v49,
                (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v50 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v50[1].klass), 0LL);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15120/*"UpdateScrollPosition"*/,
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
  __int64 v23; // x2
  int32_t size; // w27
  RecommendSupportQuestBoardListViewManager___c_c *v25; // x0
  System_Comparison_T__o *_9__20_0; // x23
  Il2CppObject *v27; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w23
  System_Collections_Generic_List_object__o *itemList; // x24
  Il2CppObject *Item; // x26
  __int64 v34; // x1
  __int64 v35; // x2
  RecommendSupportQuestBoardListViewItem_o *v36; // x25
  const MethodInfo *v37; // x4
  void *Master_object; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  System_Collections_ICollection_o *v45; // x22
  __int64 v46; // x1
  TitleInfoControl_o *titleInfo; // x21
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  struct UIScrollBar_o *v51; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v52; // x21
  System_Predicate_object__o *v53; // x22
  Il2CppObject *v54; // x23
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x0
  int32_t kind; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49F8728 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo, questInfos);
    sub_1B640C8(&Method_DataManager_GetMaster_MapMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Find__, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Sort__,
      v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Count__,
      v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__,
      v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&System_Predicate_ListViewItem__TypeInfo, v16);
    sub_1B640C8(&RecommendSupportQuestBoardListViewItem_TypeInfo, v17);
    sub_1B640C8(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__20_0__, v18);
    sub_1B640C8(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__20_1__, v19);
    sub_1B640C8(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_15120/*"UpdateScrollPosition"*/, v21);
    byte_49F8728 = 1;
  }
  kind = 0;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.questArrangementPitchY, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( questInfos )
  {
    size = questInfos->fields._size;
    if ( size >= 3 )
    {
      v25 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v25 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__20_0 = (System_Comparison_T__o *)v25->static_fields->__9__20_0;
      if ( !_9__20_0 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v25->static_fields->__9;
        _9__20_0 = (System_Comparison_T__o *)sub_1B64314(
                                               System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo,
                                               v22,
                                               v23);
        System_Comparison_object____ctor(
          _9__20_0,
          v27,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__20_0__,
          0LL);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__20_0 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)_9__20_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v29, v30);
      }
      System_Collections_Generic_List_object___Sort_55243320(
        (System_Collections_Generic_List_object__o *)questInfos,
        _9__20_0,
        (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Sort__);
    }
    else if ( size < 1 )
    {
      goto LABEL_21;
    }
    v31 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)questInfos,
               v31,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      v36 = (RecommendSupportQuestBoardListViewItem_o *)sub_1B64314(
                                                          RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                          v34,
                                                          v35);
      RecommendSupportQuestBoardListViewItem___ctor(
        v36,
        v31,
        0LL,
        (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)Item,
        v37);
      if ( !itemList )
        goto LABEL_52;
      items = itemList->fields._items;
      v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_52;
      v43 = itemList->fields._size;
      if ( (unsigned int)v43 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v36,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + v43;
        itemList->fields._size = v43 + 1;
        v44[4] = (Il2CppClass *)v36;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v36, v39, v40);
      }
    }
    while ( size != ++v31 );
  }
LABEL_21:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !Master_object )
    goto LABEL_52;
  Master_object = MapMaster__getList((MapMaster_o *)Master_object, selectWarId, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_52;
  v45 = (System_Collections_ICollection_o *)Master_object;
  if ( TitleInfoControl__TryGetTerminalTitleKind(this->fields.titleInfo, selectWarId, &kind, 0LL) )
  {
    Master_object = this->fields.titleInfo;
    if ( !Master_object )
      goto LABEL_52;
    TitleInfoControl__setTitleImg((TitleInfoControl_o *)Master_object, kind, 0, 0, 0LL);
  }
  else
  {
    Master_object = (void *)BasicHelper__IsNullOrEmpty(v45, 0LL);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( !v45 )
        goto LABEL_52;
      if ( !LODWORD(v45[1].monitor) )
        sub_1B6432C(Master_object, v46);
      Master_object = v45[2].klass;
      if ( !Master_object )
        goto LABEL_52;
      titleInfo = this->fields.titleInfo;
      Master_object = (void *)MapEntity__GetPrioredHeaderId((MapEntity_o *)Master_object, 0, 0, 0LL);
      if ( !titleInfo )
        goto LABEL_52;
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
          goto LABEL_51;
        v51 = this->fields.scrollBar;
        if ( v51 )
        {
          if ( v51->fields.mSize > 0.98 )
            goto LABEL_51;
          v52 = this->fields.itemList;
          Master_object = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
          if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
            Master_object = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
          }
          v53 = *(System_Predicate_object__o **)(*((_QWORD *)Master_object + 23) + 24LL);
          if ( !v53 )
          {
            if ( !*((_DWORD *)Master_object + 56) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              Master_object = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
            }
            v54 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
            v53 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_ListViewItem__TypeInfo, v49, v50);
            System_Predicate_object____ctor(
              v53,
              v54,
              Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__20_1__,
              0LL);
            v55 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
            v55->__9__20_1 = (struct System_Predicate_ListViewItem__o *)v53;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v55->__9__20_1, (int32_t)v53, v56, v57);
          }
          if ( v52 )
          {
            v58 = System_Collections_Generic_List_object___Find(
                    (System_Collections_Generic_List_object__o *)v52,
                    (System_Predicate_T__o *)v53,
                    (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
            if ( v58 )
              ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v58[1].klass), 0LL);
            goto LABEL_51;
          }
        }
      }
    }
LABEL_52:
    sub_1B64324(Master_object);
  }
LABEL_51:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15120/*"UpdateScrollPosition"*/,
    0.0,
    0LL);
  ActionExtensions__Call(callBack, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v16; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v19; // s9
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x19

  if ( (byte_49F872A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, folderInfo);
    sub_1B640C8(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__0__, v7);
    sub_1B640C8(&RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_TypeInfo, v8);
    byte_49F872A = 1;
  }
  v9 = sub_1B64314(
         RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_TypeInfo,
         folderInfo,
         *(_QWORD *)&warId);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = folderInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)folderInfo, v13, v14);
  *(_DWORD *)(v9 + 32) = warId;
  slideComponent = this->fields.slideComponent;
  this->fields.state = 1;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v16);
  extiTime = this->fields.extiTime;
  v19 = OUT_POS_OFS_X;
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__0__,
    0LL);
  if ( !slideComponent )
LABEL_6:
    sub_1B64324(v10);
  SlideFadeObject__SlideOut_33391564(slideComponent, v19, extiTime, 0.0, v22, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__Init(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_Stack_T__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  BalanceConfig_c *v21; // x0
  struct System_Collections_Generic_List_int__array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x28
  __int64 i; // x29
  BalanceConfig_c *v29; // x0
  struct System_Collections_Generic_List_int__array *selectWarIdData; // x20
  System_Collections_Generic_List_int__o *v31; // x22
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  RecommendSupportQuestBoardListViewManager___c_c *v36; // x0
  System_Action_object__o *_9__16_0; // x21
  Il2CppObject *v38; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  const MethodInfo *v42; // x1
  __int64 v43; // x0

  if ( (byte_49F8725 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_List_int___TypeInfo, method);
    sub_1B640C8(&BalanceConfig_TypeInfo, v4);
    sub_1B640C8(&Method_BasicHelper_ForEach_List_int____, v5);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v6);
    sub_1B640C8(&System_Collections_Generic_List_int____TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo____ctor__,
      v10);
    sub_1B640C8(
      &System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___TypeInfo,
      v11);
    sub_1B640C8(&Method_RecommendSupportQuestBoardListViewManager___c__Init_b__16_0__, v12);
    sub_1B640C8(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v13);
    byte_49F8725 = 1;
  }
  v14 = (System_Collections_Generic_Stack_T__o *)sub_1B64314(
                                                   System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___TypeInfo,
                                                   method,
                                                   v2);
  System_Collections_Generic_Stack_object____ctor(
    v14,
    (const MethodInfo_3704C34 *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo____ctor__);
  this->fields.folderTransitionData = (struct System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.folderTransitionData, (int32_t)v14, v15, v16);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  this->fields.slideComponent = (struct SlideFadeObject_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.slideComponent, (int32_t)Component_object, v19, v20);
  v21 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  v22 = (struct System_Collections_Generic_List_int__array *)sub_1B64170(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               (unsigned int)v21->static_fields->RecommendSupportMemberMax);
  this->fields.selectWarIdData = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectWarIdData, (int32_t)v22, v23, v24);
  v27 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v29 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v29 = BalanceConfig_TypeInfo;
    }
    selectWarIdData = this->fields.selectWarIdData;
    if ( (__int64)v27 >= v29->static_fields->RecommendSupportMemberMax )
      break;
    v31 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v25, v26);
    System_Collections_Generic_List_int____ctor(
      v31,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !selectWarIdData )
      goto LABEL_22;
    if ( v31 )
    {
      questSelectDialog = (RecommendSupportQuestSelectDialogComponent_o *)sub_1B64204(
                                                                            v31,
                                                                            selectWarIdData->obj.klass->_1.element_class);
      if ( !questSelectDialog )
      {
        v43 = sub_1B64348();
        sub_1B641F0(v43, 0LL);
      }
    }
    if ( v27 >= selectWarIdData->max_length )
      sub_1B6432C(questSelectDialog, v33);
    selectWarIdData->m_Items[v27] = v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)selectWarIdData + i), (int32_t)v31, v34, v35);
    ++v27;
  }
  v36 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    v36 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  _9__16_0 = (System_Action_object__o *)v36->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__16_0 = (System_Action_object__o *)sub_1B64314(System_Action_List_int___TypeInfo, v25, v26);
    System_Action_object____ctor(
      _9__16_0,
      v38,
      Method_RecommendSupportQuestBoardListViewManager___c__Init_b__16_0__,
      0LL);
    static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Action_List_int___o *)_9__16_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v40, v41);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)selectWarIdData,
    (System_Action_T__o *)_9__16_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_List_int____);
  questSelectDialog = this->fields.questSelectDialog;
  if ( !questSelectDialog )
LABEL_22:
    sub_1B64324(questSelectDialog);
  RecommendSupportQuestSelectDialogComponent__Init(questSelectDialog, v42);
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

  if ( (byte_49F8726 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Clear__,
      v3);
    byte_49F8726 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 91, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__setBackBtnSprite_36875508(titleInfo, 1, 0, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL) )
  {
    sub_1B64324(titleInfo);
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
      (const MethodInfo_3704E08 *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Clear__);
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
  __int64 v15; // x1
  __int64 v16; // x20
  System_Collections_Generic_Stack_T__o *Instance; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  RecommendSupportQuestBoardListViewItem_o *Item; // x0
  __int64 v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  int v25; // w21
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 v31; // x21
  struct System_Collections_Generic_List_int__array *selectWarIdData; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 klass_low; // x8
  System_Collections_Generic_List_int__o *v36; // x22
  int32_t size; // w25
  int32_t hierarchyIndex; // w26
  __int64 v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x8
  __int64 v46; // x1
  __int64 v47; // x8
  __int64 v48; // x8
  __int64 v49; // x1
  __int64 v50; // x2
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  __int64 v53; // x8
  RecommendSupportQuestBoardListViewItem_o *v54; // x20
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x19
  System_Action_o *v56; // x22
  RecommendSupportQuestBoardListViewObject_o *v57; // x2
  const MethodInfo *v58; // x4
  __int64 v59; // x8
  int32_t v60; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  const MethodInfo *v65; // x3
  __int64 v66; // x8
  __int64 v67; // x9
  __int64 v68; // x8
  int32_t v69; // w1
  struct System_Int32_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  SlideFadeObject_o *slideComponent; // x21
  const MethodInfo *v74; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v77; // s9
  __int64 v78; // x1
  __int64 v79; // x2
  System_Action_o *v80; // x19

  if ( (byte_49F8729 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__set_Item__, v7);
    sub_1B640C8(&Method_RecommendSupportQuestBoardListViewManager_OnClickListView__, v8);
    sub_1B640C8(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Push__,
      v11);
    sub_1B640C8(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__0__, v12);
    sub_1B640C8(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo, v13);
    sub_1B640C8(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__OnClickListView_b__3__, v14);
    sub_1B640C8(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo, v15);
    byte_49F8729 = 1;
  }
  v16 = sub_1B64314(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo, obj, method);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_66;
  *(_QWORD *)(v16 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)this, v18, v19);
  if ( !obj )
    goto LABEL_66;
  Item = RecommendSupportQuestBoardListViewObject__GetItem(obj, v20);
  *(_QWORD *)(v16 + 32) = Item;
  v22 = v16 + 32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)Item, v23, v24);
  if ( !*(_QWORD *)(v16 + 32) )
    goto LABEL_66;
  v25 = *(unsigned __int8 *)(*(_QWORD *)(v16 + 32) + 128LL);
  v26 = Method_RecommendSupportQuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1B640E0(Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
  v27 = (System_Reflection_MethodBase_o *)sub_1B640AC(v26, v26[4]);
  if ( v25 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
  if ( !*(_QWORD *)v22 )
    goto LABEL_66;
  v30 = *(_QWORD *)(*(_QWORD *)v22 + 112LL);
  *(_QWORD *)(v16 + 24) = v30;
  v31 = v16 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 24), v30, v28, v29);
  selectWarIdData = this->fields.selectWarIdData;
  Instance = (System_Collections_Generic_Stack_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance || !selectWarIdData )
    goto LABEL_66;
  klass_low = SLODWORD(Instance[3].klass);
  if ( (unsigned int)klass_low >= selectWarIdData->max_length )
    sub_1B6432C(Instance, v33);
  v36 = selectWarIdData->m_Items[klass_low];
  if ( !v36 )
    goto LABEL_66;
  if ( *(_QWORD *)v31 )
  {
    size = v36->fields._size;
    hierarchyIndex = this->fields.hierarchyIndex;
    Instance = (System_Collections_Generic_Stack_T__o *)BasicHelper__IsNullOrEmpty(
                                                          *(System_Collections_ICollection_o **)(*(_QWORD *)v31 + 40LL),
                                                          0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( size <= hierarchyIndex )
      {
        if ( !*(_QWORD *)v31 )
          goto LABEL_66;
        v59 = *(_QWORD *)(*(_QWORD *)v31 + 16LL);
        if ( !v59 )
          goto LABEL_66;
        v60 = *(_DWORD *)(v59 + 16);
        items = v36->fields._items;
        v62 = Method_System_Collections_Generic_List_int__Add__;
        ++v36->fields._version;
        if ( !items )
          goto LABEL_66;
        v63 = v36->fields._size;
        if ( (unsigned int)v63 >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v36,
            v60,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v36->fields._size = v63 + 1;
          items->m_Items[v63 + 1] = v60;
        }
      }
      else
      {
        if ( !*(_QWORD *)v31 )
          goto LABEL_66;
        v53 = *(_QWORD *)(*(_QWORD *)v31 + 16LL);
        if ( !v53 )
          goto LABEL_66;
        System_Collections_Generic_List_int___set_Item(
          v36,
          this->fields.hierarchyIndex,
          *(_DWORD *)(v53 + 16),
          (const MethodInfo_348FC40 *)Method_System_Collections_Generic_List_int__set_Item__);
      }
      Instance = (System_Collections_Generic_Stack_T__o *)this->fields.folderTransitionData;
      ++this->fields.hierarchyIndex;
      if ( !Instance )
        goto LABEL_66;
      System_Collections_Generic_Stack_object___Push(
        Instance,
        (Il2CppObject *)this->fields.currentFolderInfoData,
        (const MethodInfo_370525C *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Push__);
      v66 = *(_QWORD *)v31;
      if ( !*(_QWORD *)v31 )
        goto LABEL_66;
      v67 = *(_QWORD *)(v66 + 16);
      if ( !v67 )
        goto LABEL_66;
      RecommendSupportQuestBoardListViewManager__DispFolderList(
        this,
        *(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o **)(v66 + 40),
        *(_DWORD *)(v67 + 16),
        v65);
      return;
    }
    if ( *(_QWORD *)v31 )
    {
      Instance = (System_Collections_Generic_Stack_T__o *)BasicHelper__IsNullOrEmpty(
                                                            *(System_Collections_ICollection_o **)(*(_QWORD *)v31 + 32LL),
                                                            0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( size <= hierarchyIndex )
        {
          if ( !*(_QWORD *)v31 )
            goto LABEL_66;
          v68 = *(_QWORD *)(*(_QWORD *)v31 + 16LL);
          if ( !v68 )
            goto LABEL_66;
          v69 = *(_DWORD *)(v68 + 16);
          v70 = v36->fields._items;
          v71 = Method_System_Collections_Generic_List_int__Add__;
          ++v36->fields._version;
          if ( !v70 )
            goto LABEL_66;
          v72 = v36->fields._size;
          if ( (unsigned int)v72 >= v70->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v36,
              v69,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v36->fields._size = v72 + 1;
            v70->m_Items[v72 + 1] = v69;
          }
        }
        else
        {
          if ( !*(_QWORD *)v31 )
            goto LABEL_66;
          v64 = *(_QWORD *)(*(_QWORD *)v31 + 16LL);
          if ( !v64 )
            goto LABEL_66;
          System_Collections_Generic_List_int___set_Item(
            v36,
            this->fields.hierarchyIndex,
            *(_DWORD *)(v64 + 16),
            (const MethodInfo_348FC40 *)Method_System_Collections_Generic_List_int__set_Item__);
        }
        Instance = (System_Collections_Generic_Stack_T__o *)this->fields.folderTransitionData;
        ++this->fields.hierarchyIndex;
        if ( !Instance )
          goto LABEL_66;
        System_Collections_Generic_Stack_object___Push(
          Instance,
          (Il2CppObject *)this->fields.currentFolderInfoData,
          (const MethodInfo_370525C *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Push__);
        slideComponent = this->fields.slideComponent;
        this->fields.state = 1;
        OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v74);
        extiTime = this->fields.extiTime;
        v77 = OUT_POS_OFS_X;
        v80 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v78, v79);
        System_Action___ctor(
          v80,
          (Il2CppObject *)v16,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__0__,
          0LL);
        if ( !slideComponent )
          goto LABEL_66;
        SlideFadeObject__SlideOut_33391564(slideComponent, v77, extiTime, 0.0, v80, 0LL);
        return;
      }
    }
  }
  if ( !*(_QWORD *)v22 )
    goto LABEL_66;
  if ( *(_QWORD *)(*(_QWORD *)v22 + 120LL) )
  {
    v39 = sub_1B64314(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo, v33, v34);
    System_Object___ctor((Il2CppObject *)v39, 0LL);
    if ( !v39 )
      goto LABEL_66;
    *(_QWORD *)(v39 + 32) = v16;
    v42 = v39 + 32;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 32), v16, v40, v41);
    if ( !*(_QWORD *)(v39 + 32) )
      goto LABEL_66;
    v45 = *(_QWORD *)(*(_QWORD *)(v39 + 32) + 32LL);
    if ( !v45 )
      goto LABEL_66;
    v46 = *(_QWORD *)(v45 + 120);
    *(_QWORD *)(v39 + 16) = v46;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 16), v46, v43, v44);
    v47 = *(_QWORD *)(v39 + 32);
    if ( !v47 )
      goto LABEL_66;
    v48 = *(_QWORD *)(v47 + 32);
    if ( !v48 )
      goto LABEL_66;
    *(_DWORD *)(v39 + 24) = *(_DWORD *)(v48 + 132);
    Instance = (System_Collections_Generic_Stack_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_66;
    if ( LODWORD(Instance[3].klass) == *(_DWORD *)(v39 + 24) )
    {
      Instance = (System_Collections_Generic_Stack_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance )
      {
        Instance = (System_Collections_Generic_Stack_T__o *)Instance[2].fields._syncRoot;
        if ( Instance )
        {
          RecommendSupportData__SetQuest((RecommendSupportData_o *)Instance, *(_DWORD *)(v39 + 24), 0LL, 0LL);
          Instance = (System_Collections_Generic_Stack_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
          if ( Instance )
          {
            Instance = (System_Collections_Generic_Stack_T__o *)RecommendSupportSelectControl__GetMenu_object_(
                                                                  (RecommendSupportSelectControl_o *)Instance,
                                                                  (const MethodInfo_2EC9818 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
            if ( Instance )
            {
              Instance = (System_Collections_Generic_Stack_T__o *)Instance[4].klass;
              if ( Instance )
              {
                RecommendSupportListViewManager__SetItemSub(
                  (RecommendSupportListViewManager_o *)Instance,
                  *(_DWORD *)(v39 + 24),
                  v51);
                Instance = (System_Collections_Generic_Stack_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
                if ( Instance )
                {
                  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v52);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_66:
      sub_1B64324(Instance);
    }
    if ( !*(_QWORD *)v42 )
      goto LABEL_66;
    v54 = *(RecommendSupportQuestBoardListViewItem_o **)(*(_QWORD *)v42 + 32LL);
    questSelectDialog = this->fields.questSelectDialog;
    v56 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v49, v50);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v39,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__OnClickListView_b__3__,
      0LL);
    if ( !questSelectDialog )
      goto LABEL_66;
    RecommendSupportQuestSelectDialogComponent__Open(questSelectDialog, v54, v57, v56, v58);
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

  if ( (byte_49F872C & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Clear__,
      v4);
    byte_49F872C = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentFolderInfoData, 0, size, v2);
  }
  folderTransitionData = (System_Collections_Generic_Stack_T__o *)this->fields.folderTransitionData;
  if ( folderTransitionData )
  {
    p_folderTransitionData = (ServantStatusBattleListViewItem_o *)&this->fields.folderTransitionData;
    System_Collections_Generic_Stack_object___Clear(
      folderTransitionData,
      (const MethodInfo_3704E08 *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Clear__);
    p_folderTransitionData->klass = 0LL;
    sub_1B6406C(p_folderTransitionData, 0, v10, v11);
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
  void *Instance; // x0
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v10; // x20
  const MethodInfo *v11; // x3

  if ( (byte_49F872B & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__,
      method);
    sub_1B640C8(&Method_RecommendSupportQuestBoardListViewManager_OnclickBack__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Pop__,
      v5);
    byte_49F872B = 1;
  }
  if ( !this->fields.state )
  {
    v6 = Method_RecommendSupportQuestBoardListViewManager_OnclickBack__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickBack__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.folderTransitionData, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance )
      {
        RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v9);
        return;
      }
LABEL_13:
      sub_1B64324(Instance);
    }
    Instance = this->fields.folderTransitionData;
    --this->fields.hierarchyIndex;
    if ( !Instance )
      goto LABEL_13;
    Instance = System_Collections_Generic_Stack_object___Pop(
                 (System_Collections_Generic_Stack_T__o *)Instance,
                 (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Pop__);
    if ( !Instance )
      goto LABEL_13;
    v10 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)Instance;
    Instance = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    if ( !Instance )
      goto LABEL_13;
    RecommendSupportQuestBoardListViewManager__DispFolderList(this, v10, *((_DWORD *)Instance + 6), v11);
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
    sub_1B64324(scrollView);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F872D & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v1);
    byte_49F872D = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestBoardListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c___ctor(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__20_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *a,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *b,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8
  struct QuestEntity_o *v5; // x9

  if ( !b || (questEntity = b->fields.questEntity) == 0LL || !a || (v5 = a->fields.questEntity) == 0LL )
    sub_1B64324(this);
  return questEntity->fields.priority - v5->fields.priority;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__20_1(
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

  if ( (byte_49F872F & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportQuestBoardListViewItem_TypeInfo, item);
    this = (RecommendSupportQuestBoardListViewManager___c_o *)sub_1B640C8(
                                                                &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                                v4);
    byte_49F872F = 1;
  }
  if ( !item )
    goto LABEL_8;
  methodPtr_low = LOBYTE(RecommendSupportQuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    index = item[1].fields.index;
    this = (RecommendSupportQuestBoardListViewManager___c_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
      return index == LODWORD(this[7].monitor);
LABEL_8:
    sub_1B64324(this);
  }
  v8 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_o *)sub_1B645E4(item);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0___CreateChapterList_b__0(v8, v9, v10);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c___Init_b__16_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        System_Collections_Generic_List_int__o *x,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x0

  if ( (byte_49F872E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, x);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_49F872E = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, x, method);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
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
  RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_o *v4; // x19
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  const char *name; // x8
  bool result; // w0
  RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *v9; // x0
  const MethodInfo *v10; // x1

  v4 = this;
  if ( (byte_49F8730 & 1) == 0 )
  {
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_o *)sub_1B640C8(
                                                                                  &RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                                                  item);
    byte_49F8730 = 1;
  }
  if ( !item )
    goto LABEL_9;
  methodPtr_low = LOBYTE(RecommendSupportQuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    klass = item[1].klass;
    if ( klass )
    {
      name = klass->_1.name;
      if ( name )
        return *((_DWORD *)name + 4) == v4->fields.moveWarId;
    }
LABEL_9:
    sub_1B64324(this);
  }
  v9 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *)sub_1B645E4(item);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *v4; // x19
  __int64 v5; // x1
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x9
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questList; // x21
  int32_t id; // w22
  System_Action_o *_9__1; // x23
  int32_t v12; // w2
  int32_t v13; // w3

  v4 = this;
  if ( (byte_49F8731 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *)sub_1B640C8(
                                                                                  &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__1__,
                                                                                  v5);
    byte_49F8731 = 1;
  }
  folderInfo = v4->fields.folderInfo;
  if ( !folderInfo )
    goto LABEL_9;
  warEntity = folderInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_9;
  _4__this = v4->fields.__4__this;
  questList = folderInfo->fields.questList;
  id = warEntity->fields.id;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v12, v13);
  }
  if ( !_4__this )
LABEL_9:
    sub_1B64324(this);
  RecommendSupportQuestBoardListViewManager__CreateQuestList(_4__this, questList, id, _9__1, v3);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___OnClickListView_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v9; // x8
  float intoTime; // s9
  System_Action_o *_9__2; // x21
  float v12; // s8
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49F8732 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__2__, v3);
    byte_49F8732 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_9;
  intoTime = v9->fields.intoTime;
  _9__2 = this->fields.__9__2;
  v12 = OUT_POS_OFS_X;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v13, v14);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1B64324(_4__this);
  SlideFadeObject__SlideIn_33390620(slideComponent, v12, intoTime, 0.0, _9__2, 0LL);
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
    sub_1B64324(this);
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
  RecommendSupportData_o *klass; // x20
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *CS___8__locals1; // x8
  struct RecommendSupportQuestBoardListViewItem_o *item; // x8
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_49F8733 & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_49F8733 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  klass = (RecommendSupportData_o *)Instance[7].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)Instance[7].klass) == 0LL
    || (RecommendSupportData__SetQuest((RecommendSupportData_o *)Instance, this->fields.index, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_2EC9818 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0LL
    || (Instance = (Il2CppObject *)Instance[10].klass) == 0LL )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  RecommendSupportListViewManager__SetItemSub((RecommendSupportListViewManager_o *)Instance, this->fields.index, v8);
LABEL_15:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v9);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_o *v4; // x19
  __int64 v5; // x1
  System_Action_o *_9__1; // x23
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo; // x21
  int32_t warId; // w22
  int32_t v10; // w2
  int32_t v11; // w3

  v4 = this;
  if ( (byte_49F8734 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_o *)sub_1B640C8(
                                                                                  &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__1__,
                                                                                  v5);
    byte_49F8734 = 1;
  }
  _9__1 = v4->fields.__9__1;
  _4__this = v4->fields.__4__this;
  folderInfo = v4->fields.folderInfo;
  warId = v4->fields.warId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !_4__this )
    sub_1B64324(this);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(_4__this, folderInfo, warId, _9__1, v3);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0___DispFolderList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v9; // x8
  float intoTime; // s9
  System_Action_o *_9__2; // x21
  float v12; // s8
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49F8735 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__2__, v3);
    byte_49F8735 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_9;
  intoTime = v9->fields.intoTime;
  _9__2 = this->fields.__9__2;
  v12 = OUT_POS_OFS_X;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v13, v14);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1B64324(_4__this);
  SlideFadeObject__SlideIn_33390620(slideComponent, v12, intoTime, 0.0, _9__2, 0LL);
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
    sub_1B64324(this);
  }
  v4->fields.state = 0;
}
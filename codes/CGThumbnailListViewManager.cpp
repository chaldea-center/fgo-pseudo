void CGThumbnailListViewManager___ctor(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isCG = 257;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CGThumbnailListViewManager__ChangeIconScale(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  CGThumbnailListViewManager_o *v8; // x19
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CGThumbnailListViewManager_o *v11; // x0
  int v12; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  struct ListViewSort_o *sort; // x8
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  v8 = this;
  if ( (byte_4CE950F & 1) == 0 )
  {
    this = (CGThumbnailListViewManager_o *)sub_1C7BAE8(&StringLiteral_7048/*"GalleryListItemScale"*/);
    byte_4CE950F = 1;
  }
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = v8->fields.smallSizeSeed;
    v11 = v8;
    v12 = 2;
    goto LABEL_9;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = v8->fields.extremelySmallSizeSeed;
    v11 = v8;
    v12 = 3;
    goto LABEL_9;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = v8->fields.normalSizeSeed;
    v11 = v8;
    v12 = 1;
LABEL_9:
    v11->fields.seed = smallSizeSeed;
    p_seed = &v11->fields.seed;
    *((_DWORD *)p_seed + 66) = v12;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = v8->fields.sort;
  if ( !sort )
    goto LABEL_14;
  v15 = v8->fields.scaleType;
  sort->fields.iconScaleKind = v15;
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7048/*"GalleryListItemScale"*/, v15, 0);
  CGThumbnailListViewManager__ModifyList(v8, 1, v16);
  CGThumbnailListViewManager__SetMode(v8, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0);
  this = (CGThumbnailListViewManager_o *)v8->fields.scrollBar;
  if ( !this
    || (this = (CGThumbnailListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_14:
    sub_1C7BD40(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void CGThumbnailListViewManager__CreateList(
        CGThumbnailListViewManager_o *this,
        System_Collections_Generic_List_GalleryEntity__o *thumbnailList,
        bool isCgFlag,
        bool isMovieFlag,
        CGThumbnailListViewManager_CallbackFunc_o *listItemCallback,
        const MethodInfo *method)
{
  __int64 v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct ListViewSort_o *sort; // x24
  void *Int; // x0
  __int64 v19; // x1
  UILabel_o *emptyMessageLabel; // x24
  struct ListViewSort_o *v21; // x19
  CGThumbnailListViewManager___c_c *v22; // x0
  System_Func_object__int__o *_9__26_0; // x22
  Il2CppObject *v24; // x19
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  CGThumbnailListViewManager_o *v39; // x21
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8
  System_Collections_Generic_List_object__o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Collections_Generic_List_object__o *v48; // x19
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t size; // w2
  int v56; // w9
  struct System_Collections_Generic_List_string__o *unloadTargetPathList; // x8
  int32_t v58; // w2
  int v59; // w9
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Func_object__bool__o **v66; // x23
  Il2CppObject *Item; // x0
  System_Func_object__bool__o *v68; // x25
  Il2CppObject *v69; // x24
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_List_object__o *v77; // x25
  int32_t v78; // w27
  _DWORD *v79; // x26
  int32_t v80; // w19
  int32_t v81; // w28
  int64_t v82; // x29
  System_String_o *v83; // x1
  int v84; // w27
  Il2CppClass *klass; // d8
  int v86; // w26
  int v87; // w25
  System_String_o *v88; // x19
  __int64 v89; // x24
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  __int64 v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  __int64 v105; // x8
  struct ListViewSort_o *v106; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *scrollBar; // x19
  struct UIScrollBar_o *v110; // x8
  struct ListViewSort_o *v111; // x8
  int32_t v112; // w1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UserGameEntity_o *SelfUserGame; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-68h]

  if ( (byte_4CE950A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_GetValue_string___);
    sub_1C7BAE8(&CGThumbnailListItem_TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GalleryResourceMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__getEntityList__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderBy_GalleryEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_GalleryEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    sub_1C7BAE8(&System_Func_GalleryResourceEntity__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_GalleryEntity__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GalleryEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GalleryEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager___c__CreateList_b__26_0__);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager___c__DisplayClass26_0__CreateList_b__1__);
    sub_1C7BAE8(&CGThumbnailListViewManager___c__DisplayClass26_0_TypeInfo);
    sub_1C7BAE8(&CGThumbnailListViewManager___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7048/*"GalleryListItemScale"*/);
    sub_1C7BAE8(&StringLiteral_6932/*"GALLERY_NO_THUMBNAIL"*/);
    sub_1C7BAE8(&StringLiteral_9247/*"MyRoom/Gallery/Thumbnail/"*/);
    sub_1C7BAE8(&StringLiteral_7046/*"GalleryAscendingOrder"*/);
    sub_1C7BAE8(&StringLiteral_21611/*"maleThumbnailName"*/);
    byte_4CE950A = 1;
  }
  v10 = sub_1C7BD34(CGThumbnailListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.callbackFunc = listItemCallback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)listItemCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  sort = this->fields.sort;
  Int = (void *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7046/*"GalleryAscendingOrder"*/, 1, 0);
  if ( !sort )
    goto LABEL_77;
  sort->fields.isAscendingOrder = (_DWORD)Int == 1;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_6932/*"GALLERY_NO_THUMBNAIL"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_77;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Int, 0);
  Int = this->fields.sort;
  this->fields.isCG = isCgFlag;
  this->fields.isMovie = isMovieFlag;
  if ( !Int )
    goto LABEL_77;
  ListViewSort__SetFilter((ListViewSort_o *)Int, 100, isCgFlag, 0);
  Int = this->fields.sort;
  if ( !Int )
    goto LABEL_77;
  ListViewSort__SetFilter((ListViewSort_o *)Int, 101, this->fields.isMovie, 0);
  v21 = this->fields.sort;
  Int = (void *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7048/*"GalleryListItemScale"*/, 1, 0);
  if ( !v21 )
    goto LABEL_77;
  v21->fields.iconScaleKind = (int)Int;
  v22 = CGThumbnailListViewManager___c_TypeInfo;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v22 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__26_0 = (System_Func_object__int__o *)v22->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__26_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_GalleryEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__26_0, v24, Method_CGThumbnailListViewManager___c__CreateList_b__26_0__, 0);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Func_GalleryEntity__int__o *)_9__26_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__26_0,
      (int32_t)_9__26_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)thumbnailList,
                                                               (System_Func_TSource__TKey__o *)_9__26_0,
                                                               (const MethodInfo_319EF58 *)Method_System_Linq_Enumerable_OrderBy_GalleryEntity__int___);
  Int = System_Linq_Enumerable__ToList_object_(
          v32,
          (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_GalleryEntity___);
  if ( !v10 )
    goto LABEL_77;
  *(_QWORD *)(v10 + 16) = Int;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)Int, v33, v34, v35, v36, v37, v38);
  v39 = this;
  thumbnailPathList = this->fields.thumbnailPathList;
  if ( !thumbnailPathList )
  {
    v41 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v41,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.thumbnailPathList = (struct System_Collections_Generic_List_string__o *)v41;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.thumbnailPathList,
      (int32_t)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    v39 = this;
    v48 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v48,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)v48;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.unloadTargetPathList,
      (int32_t)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    thumbnailPathList = this->fields.thumbnailPathList;
    if ( !thumbnailPathList )
      goto LABEL_77;
  }
  size = thumbnailPathList->fields._size;
  v56 = thumbnailPathList->fields._version + 1;
  thumbnailPathList->fields._size = 0;
  thumbnailPathList->fields._version = v56;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)thumbnailPathList->fields._items, 0, size, 0);
  unloadTargetPathList = v39->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
    goto LABEL_77;
  v58 = unloadTargetPathList->fields._size;
  v59 = unloadTargetPathList->fields._version + 1;
  unloadTargetPathList->fields._size = 0;
  unloadTargetPathList->fields._version = v59;
  if ( v58 >= 1 )
    System_Array__Clear((System_Array_o *)unloadTargetPathList->fields._items, 0, v58, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Int = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  if ( !Int )
    goto LABEL_77;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  *((System_Collections_Generic_IEnumerable_TSource__o **)Int
                                                                  + 5),
                                                                  (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
  Int = *(void **)(v10 + 16);
  *(_DWORD *)(v10 + 24) = 0;
  if ( !Int )
    goto LABEL_77;
  v19 = 0;
  v66 = (System_Func_object__bool__o **)(v10 + 32);
  while ( (int)v19 < *((_DWORD *)Int + 6) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Int,
             v19,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GalleryEntity__get_Item__);
    v68 = *v66;
    v69 = Item;
    if ( !*v66 )
    {
      v68 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_GalleryResourceEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v68,
        (Il2CppObject *)v10,
        Method_CGThumbnailListViewManager___c__DisplayClass26_0__CreateList_b__1__,
        0);
      *(_QWORD *)(v10 + 32) = v68;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 32), (int32_t)v68, v70, v71, v72, v73, v74, v75);
    }
    v76 = System_Linq_Enumerable__Where_object_(
            source,
            (System_Func_TSource__bool__o *)v68,
            (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    Int = System_Linq_Enumerable__ToList_object_(
            v76,
            (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Int )
      goto LABEL_77;
    v77 = (System_Collections_Generic_List_object__o *)Int;
    if ( *((int *)Int + 6) >= 1 )
    {
      v78 = 0;
      while ( 1 )
      {
        Int = System_Collections_Generic_List_object___get_Item(
                v77,
                v78,
                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
        if ( !Int )
          goto LABEL_77;
        v79 = Int;
        v80 = *((_DWORD *)Int + 13);
        v81 = *((_DWORD *)Int + 14);
        v82 = *((int *)Int + 15);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(v80, v81, v82, 0, 0, 0) )
          break;
        if ( ++v78 >= v77->fields._size )
          goto LABEL_51;
      }
      Int = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_77;
      Int = (void *)UserGameEntity__IsMale(SelfUserGame, 0);
      if ( !v69 )
        goto LABEL_77;
      v83 = ((unsigned __int8)Int & 1) != 0
          ? (System_String_o *)BasicHelper__GetValue_object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)v69[2].monitor,
                                 (System_String_o *)StringLiteral_21611/*"maleThumbnailName"*/,
                                 (Il2CppObject *)v69[2].klass,
                                 (const MethodInfo_315DCFC *)Method_BasicHelper_GetValue_string___)
          : (System_String_o *)v69[2].klass;
      v84 = *(_DWORD *)(v10 + 24);
      klass = v69[1].klass;
      v86 = v79[6];
      v87 = v77->fields._size;
      v88 = System_String__Concat_64176912((System_String_o *)StringLiteral_9247/*"MyRoom/Gallery/Thumbnail/"*/, v83, 0);
      v89 = sub_1C7BD34(CGThumbnailListItem_TypeInfo);
      ListViewItem___ctor((ListViewItem_o *)v89, 0);
      *(_DWORD *)(v89 + 20) = v84;
      *(_QWORD *)(v89 + 120) = klass;
      *(_DWORD *)(v89 + 128) = v86;
      *(_BYTE *)(v89 + 132) = v87 > 1;
      *(_BYTE *)(v89 + 133) = 1;
      *(_QWORD *)(v89 + 136) = v88;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v89 + 136), (int32_t)v88, v90, v91, v92, v93, v94, v95);
      Int = this->fields.itemList;
      if ( !Int )
        goto LABEL_77;
      v102 = *((_QWORD *)Int + 2);
      v103 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)Int + 7);
      if ( !v102 )
        goto LABEL_77;
      v104 = *((int *)Int + 6);
      if ( (unsigned int)v104 >= *(_DWORD *)(v102 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Int,
          (Il2CppObject *)v89,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
      }
      else
      {
        v105 = v102 + 8 * v104;
        *((_DWORD *)Int + 6) = v104 + 1;
        *(_QWORD *)(v105 + 32) = v89;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v105 + 32), v89, v96, v97, v98, v99, v100, v101);
      }
    }
LABEL_51:
    Int = *(void **)(v10 + 16);
    v19 = (unsigned int)(*(_DWORD *)(v10 + 24) + 1);
    *(_DWORD *)(v10 + 24) = v19;
    if ( !Int )
      goto LABEL_77;
  }
  v106 = this->fields.sort;
  if ( !v106 )
    goto LABEL_77;
  iconScaleKind = v106->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_61;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v60, v61, v62, v63, v64, v65);
LABEL_61:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    Int = this->fields.scrollBar;
    if ( Int )
    {
      Int = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0);
      if ( Int )
      {
        Int = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Int, 0);
        if ( ((unsigned __int8)Int & 1) == 0 )
          return;
        v110 = this->fields.scrollBar;
        if ( v110 )
        {
          if ( v110->fields.mSize > 0.98 )
            return;
          v111 = this->fields.sort;
          if ( v111 )
          {
            if ( v111->fields.isAscendingOrder )
            {
              v112 = 0;
            }
            else
            {
              itemSortList = this->fields.itemSortList;
              if ( !itemSortList )
                goto LABEL_77;
              v112 = itemSortList->fields._size - 1;
            }
            ListViewManager__JumpItem((ListViewManager_o *)this, v112, 0);
            Int = this->fields.scrollBar;
            if ( Int )
            {
              UIProgressBar__set_value((UIProgressBar_o *)Int, 0.0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_77:
    sub_1C7BD40(Int, v19);
  }
}


System_String_o *CGThumbnailListViewManager__GetScaleButtonSpriteName(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C7BD40(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


void CGThumbnailListViewManager__JumpItemForID(
        CGThumbnailListViewManager_o *this,
        int32_t galleryId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v9; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Converter_TInput__TOutput__o *v11; // x22
  Il2CppObject *v12; // x23
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_TOutput__o *v20; // x21
  System_Func_object__bool__o *v21; // x22
  Il2CppObject *v22; // x0
  int32_t klass_high; // w1

  if ( (byte_4CE9512 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_CGThumbnailListItem___);
    sub_1C7BAE8(&System_Func_CGThumbnailListItem__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager___c__JumpItemForID_b__37_0__);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager___c__DisplayClass37_0__JumpItemForID_b__1__);
    sub_1C7BAE8(&CGThumbnailListViewManager___c__DisplayClass37_0_TypeInfo);
    sub_1C7BAE8(&CGThumbnailListViewManager___c_TypeInfo);
    byte_4CE9512 = 1;
  }
  v5 = sub_1C7BD34(CGThumbnailListViewManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  *(_DWORD *)(v5 + 16) = galleryId;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    gameObject = this->fields.scrollBar;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        gameObject = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          return;
        v9 = this->fields.scrollBar;
        if ( v9 )
        {
          if ( v9->fields.mSize > 0.98 )
            return;
          itemList = this->fields.itemList;
          gameObject = CGThumbnailListViewManager___c_TypeInfo;
          if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
            gameObject = CGThumbnailListViewManager___c_TypeInfo;
          }
          v11 = *(System_Converter_TInput__TOutput__o **)(*((_QWORD *)gameObject + 23) + 48LL);
          if ( !v11 )
          {
            if ( !*((_DWORD *)gameObject + 56) )
            {
              j_il2cpp_runtime_class_init_0(gameObject);
              gameObject = CGThumbnailListViewManager___c_TypeInfo;
            }
            v12 = (Il2CppObject *)**((_QWORD **)gameObject + 23);
            v11 = (System_Converter_TInput__TOutput__o *)sub_1C7BD34(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
            System_Converter_object__object____ctor(
              v11,
              v12,
              Method_CGThumbnailListViewManager___c__JumpItemForID_b__37_0__,
              0);
            static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__37_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)v11;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__37_0,
              (int32_t)v11,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19);
          }
          if ( itemList )
          {
            v20 = System_Collections_Generic_List_object___ConvertAll_object_(
                    (System_Collections_Generic_List_object__o *)itemList,
                    (System_Converter_T__TOutput__o *)v11,
                    (const MethodInfo_3096758 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
            v21 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_CGThumbnailListItem__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v21,
              (Il2CppObject *)v5,
              Method_CGThumbnailListViewManager___c__DisplayClass37_0__JumpItemForID_b__1__,
              0);
            v22 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                    (System_Func_TSource__bool__o *)v21,
                    (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_CGThumbnailListItem___);
            if ( v22 )
              klass_high = HIDWORD(v22[1].klass);
            else
              klass_high = 0;
            ListViewManager__SetTopItem((ListViewManager_o *)this, klass_high, 0);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1C7BD40(gameObject, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void CGThumbnailListViewManager__ModifyList(
        CGThumbnailListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v9; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22

  if ( (byte_4CE950E & 1) == 0 )
  {
    sub_1C7BAE8(&CGThumbnailListItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE950E = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1C7BD40(itemList, isIconSizeChange);
  size = itemList->fields._size;
  if ( size >= 1 && isIconSizeChange )
  {
    v7 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v7,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v9 = (ListViewItem_o *)Item;
        naturalAligment = CGThumbnailListItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (CGThumbnailListItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CGThumbnailListItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            itemList = (System_Collections_Generic_List_object__o *)v9->fields.viewObject;
            if ( !itemList )
              goto LABEL_17;
            ListViewObject__SetItemSeed((ListViewObject_o *)itemList, v9, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v7 )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_17;
    }
  }
}


void CGThumbnailListViewManager__OnClickListView(
        CGThumbnailListViewManager_o *this,
        CGThumbnailObject_o *obj,
        const MethodInfo *method)
{
  CGThumbnailListViewManager_o *v4; // x19
  int32_t Index; // w0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  v4 = this;
  if ( (byte_4CE9513 & 1) == 0 )
  {
    this = (CGThumbnailListViewManager_o *)sub_1C7BAE8(&Method_CGThumbnailListViewManager_OnClickListView__);
    byte_4CE9513 = 1;
  }
  if ( v4->fields.isInput )
  {
    if ( !obj )
      sub_1C7BD40(this, obj);
    Index = ListViewObject__get_Index((ListViewObject_o *)obj, 0);
    v7 = CGThumbnailListViewManager__SelectItemCoroutine(v4, Index, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)v4, v7, 0);
    v8 = Method_CGThumbnailListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_CGThumbnailListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C7BB00(Method_CGThumbnailListViewManager_OnClickListView__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  }
}


void CGThumbnailListViewManager__OnClickSortAscendingOrder(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w9

  if ( (byte_4CE9511 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__);
    sub_1C7BAE8(&StringLiteral_7046/*"GalleryAscendingOrder"*/);
    byte_4CE9511 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C7BD40(v5, v6);
    isAscendingOrder = sort->fields.isAscendingOrder;
    sort->fields.isAscendingOrder = !isAscendingOrder;
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7046/*"GalleryAscendingOrder"*/, !isAscendingOrder, 0);
    UnityEngine_PlayerPrefs__Save(0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void CGThumbnailListViewManager__OnCloseFullScreenView(
        CGThumbnailListViewManager_o *this,
        CGThumbnailListViewManager_CallbackFunc_o *listItemCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.callbackFunc = listItemCallback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)listItemCallback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CGThumbnailListViewManager__OnMoveEnd(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4CE950D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE950D = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C7BD40(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CGThumbnailListViewManager__RequestListObject(
        CGThumbnailListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x22
  int32_t scaleType; // w21
  System_Action_object__object__o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CE950C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_string__string__TypeInfo);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager_SetThumbnailAssetPath__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CGThumbnailObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CGThumbnailObject__get_Count__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CE950C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)CGThumbnailListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_CGThumbnailObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__MoveNext__) )
    {
      current = v14.fields._current;
      scaleType = this->fields.scaleType;
      v10 = (System_Action_object__object__o *)sub_1C7BD34(System_Action_string__string__TypeInfo);
      System_Action_object__object____ctor(
        v10,
        (Il2CppObject *)this,
        Method_CGThumbnailListViewManager_SetThumbnailAssetPath__,
        0);
      if ( !current )
        sub_1C7BD40(v11, v12);
      CGThumbnailObject__Init(
        (CGThumbnailObject_o *)current,
        mode,
        scaleType,
        (System_Action_string__string__o *)v10,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__Dispose__);
  }
}


System_Collections_IEnumerator_o *CGThumbnailListViewManager__SelectItemCoroutine(
        CGThumbnailListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CE9514 & 1) == 0 )
  {
    sub_1C7BAE8(&CGThumbnailListViewManager__SelectItemCoroutine_d__40_TypeInfo);
    byte_4CE9514 = 1;
  }
  v5 = sub_1C7BD34(CGThumbnailListViewManager__SelectItemCoroutine_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v5 + 40) = index;
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void CGThumbnailListViewManager__SetFilter(
        CGThumbnailListViewManager_o *this,
        bool isCg,
        bool isMovieFlag,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  this->fields.isCG = isCg;
  this->fields.isMovie = isMovieFlag;
  if ( !sort || (ListViewSort__SetFilter(sort, 100, isCg, 0), (sort = this->fields.sort) == 0) )
    sub_1C7BD40(sort, isCg);
  ListViewSort__SetFilter(sort, 101, this->fields.isMovie, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void CGThumbnailListViewManager__SetMode(CGThumbnailListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    CGThumbnailListViewManager__RequestListObject(this, mode, v5);
}


void CGThumbnailListViewManager__SetObjectItem(
        CGThumbnailListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  int32_t initMode; // w23
  int32_t scaleType; // w21
  System_Action_object__object__o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  int32_t v13; // w1

  if ( (byte_4CE950B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_string__string__TypeInfo);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager_SetThumbnailAssetPath__);
    sub_1C7BAE8(&CGThumbnailObject_TypeInfo);
    byte_4CE950B = 1;
  }
  if ( obj )
  {
    naturalAligment = CGThumbnailObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (CGThumbnailObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CGThumbnailObject_TypeInfo )
        obj = 0;
    }
    else
    {
      obj = 0;
    }
  }
  initMode = this->fields.initMode;
  scaleType = this->fields.scaleType;
  v9 = (System_Action_object__object__o *)sub_1C7BD34(System_Action_string__string__TypeInfo);
  System_Action_object__object____ctor(
    v9,
    (Il2CppObject *)this,
    Method_CGThumbnailListViewManager_SetThumbnailAssetPath__,
    0);
  if ( !obj )
    sub_1C7BD40(v10, v11);
  if ( initMode == 2 )
    v13 = 2;
  else
    v13 = 1;
  CGThumbnailObject__Init((CGThumbnailObject_o *)obj, v13, scaleType, (System_Action_string__string__o *)v9, v12);
}


void CGThumbnailListViewManager__SetSortButtonImage(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4CE9510 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17611/*"btn_sort_up"*/);
    sub_1C7BAE8(&StringLiteral_17711/*"btn_txt_up"*/);
    sub_1C7BAE8(&StringLiteral_17662/*"btn_txt_new"*/);
    sub_1C7BAE8(&StringLiteral_17652/*"btn_txt_down"*/);
    sub_1C7BAE8(&StringLiteral_17669/*"btn_txt_old"*/);
    sub_1C7BAE8(&StringLiteral_17608/*"btn_sort_down"*/);
    byte_4CE9510 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_34;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( v8 )
    {
      sortKind = v8->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17669/*"btn_txt_old"*/ : &StringLiteral_17662/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17608/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17611/*"btn_sort_up"*/;
LABEL_30:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17711/*"btn_txt_up"*/ : &StringLiteral_17652/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17611/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17608/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C7BD40(sort, v4);
  }
}


void CGThumbnailListViewManager__SetThumbnailAssetPath(
        CGThumbnailListViewManager_o *this,
        System_String_o *loadPath,
        System_String_o *unloadTargetPath,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_string__o *unloadTargetPathList; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_String_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_String_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8

  if ( (byte_4CE9516 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4CE9516 = 1;
  }
  if ( !System_String__IsNullOrEmpty(unloadTargetPath, 0) )
  {
    unloadTargetPathList = this->fields.unloadTargetPathList;
    if ( !unloadTargetPathList )
      goto LABEL_26;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)unloadTargetPathList,
            (Il2CppObject *)unloadTargetPath,
            (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      unloadTargetPathList = this->fields.unloadTargetPathList;
      if ( !unloadTargetPathList )
        goto LABEL_26;
      items = unloadTargetPathList->fields._items;
      v16 = Method_System_Collections_Generic_List_string__Add__;
      ++unloadTargetPathList->fields._version;
      if ( !items )
        goto LABEL_26;
      size = unloadTargetPathList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)unloadTargetPathList,
          (Il2CppObject *)unloadTargetPath,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        unloadTargetPathList->fields._size = size + 1;
        v18[4] = (Il2CppClass *)unloadTargetPath;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)unloadTargetPath, v9, v10, v11, v12, v13, v14);
      }
    }
  }
  unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_String__IsNullOrEmpty(loadPath, 0);
  if ( ((unsigned __int8)unloadTargetPathList & 1) != 0 )
    goto LABEL_23;
  unloadTargetPathList = this->fields.thumbnailPathList;
  if ( !unloadTargetPathList )
    goto LABEL_26;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)unloadTargetPathList,
          (Il2CppObject *)loadPath,
          (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    unloadTargetPathList = this->fields.thumbnailPathList;
    if ( unloadTargetPathList )
    {
      v25 = unloadTargetPathList->fields._items;
      v26 = Method_System_Collections_Generic_List_string__Add__;
      ++unloadTargetPathList->fields._version;
      if ( v25 )
      {
        v27 = unloadTargetPathList->fields._size;
        if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)unloadTargetPathList,
            (Il2CppObject *)loadPath,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &v25->obj.klass + v27;
          unloadTargetPathList->fields._size = v27 + 1;
          v28[4] = (Il2CppClass *)loadPath;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)loadPath, v19, v20, v21, v22, v23, v24);
        }
        goto LABEL_19;
      }
    }
LABEL_26:
    sub_1C7BD40(unloadTargetPathList, v7);
  }
LABEL_19:
  unloadTargetPathList = this->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
    goto LABEL_26;
  unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_Collections_Generic_List_object___Contains(
                                                                               (System_Collections_Generic_List_object__o *)unloadTargetPathList,
                                                                               (Il2CppObject *)loadPath,
                                                                               (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)unloadTargetPathList & 1) != 0 )
  {
    unloadTargetPathList = this->fields.unloadTargetPathList;
    if ( !unloadTargetPathList )
      goto LABEL_26;
    unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_Collections_Generic_List_object___Remove(
                                                                                 (System_Collections_Generic_List_object__o *)unloadTargetPathList,
                                                                                 (Il2CppObject *)loadPath,
                                                                                 (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_string__Remove__);
  }
LABEL_23:
  thumbnailPathList = this->fields.thumbnailPathList;
  if ( !thumbnailPathList )
    goto LABEL_26;
  if ( thumbnailPathList->fields._size >= 101 )
    CGThumbnailListViewManager__UnloadTargetTextureAsset(this, v7);
}


void CGThumbnailListViewManager__UnloadTargetTextureAsset(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  CGThumbnailListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8
  int v4; // w21
  int v5; // w26
  int size; // w8
  int m_CancellationTokenSource; // w9
  Il2CppObject *v8; // x20
  AssetData_o *AssetStorage; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  intptr_t v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  intptr_t v29; // x8

  v2 = this;
  if ( (byte_4CE9517 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (CGThumbnailListViewManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4CE9517 = 1;
  }
  thumbnailPathList = v2->fields.thumbnailPathList;
  if ( !thumbnailPathList )
LABEL_28:
    sub_1C7BD40(this, method);
  v4 = 0;
  v5 = 100;
LABEL_5:
  size = thumbnailPathList->fields._size;
  while ( v5 < size )
  {
    this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
    if ( !this )
      goto LABEL_28;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    if ( v4 > m_CancellationTokenSource )
      break;
    if ( m_CancellationTokenSource >= 1 )
    {
      this = (CGThumbnailListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               0,
                                               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !v2->fields.thumbnailPathList )
        goto LABEL_28;
      v8 = (Il2CppObject *)this;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)v2->fields.thumbnailPathList,
        (Il2CppObject *)this,
        (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_string__Remove__);
      this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
      if ( !this )
        goto LABEL_28;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)this,
        v8,
        (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_string__Remove__);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage((System_String_o *)v8, 0);
      if ( AssetStorage )
      {
        this = (CGThumbnailListViewManager_o *)AssetData__RemoveEntryAll(AssetStorage, 0);
        thumbnailPathList = v2->fields.thumbnailPathList;
        ++v5;
        if ( !thumbnailPathList )
          goto LABEL_28;
      }
      else
      {
        this = (CGThumbnailListViewManager_o *)v2->fields.thumbnailPathList;
        if ( !this )
          goto LABEL_28;
        m_CachedPtr = this->fields.m_CachedPtr;
        v17 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_28;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v8,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v19 + 32) = v8;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 32), (int32_t)v8, v10, v11, v12, v13, v14, v15);
        }
        this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
        if ( !this )
          goto LABEL_28;
        v26 = this->fields.m_CachedPtr;
        v27 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v26 )
          goto LABEL_28;
        v28 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v8,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = v26 + 8 * v28;
          LODWORD(this->fields.m_CancellationTokenSource) = v28 + 1;
          *(_QWORD *)(v29 + 32) = v8;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v29 + 32), (int32_t)v8, v20, v21, v22, v23, v24, v25);
        }
        thumbnailPathList = v2->fields.thumbnailPathList;
        ++v4;
        if ( !thumbnailPathList )
          goto LABEL_28;
      }
      goto LABEL_5;
    }
  }
}


void CGThumbnailListViewManager__UnloadTextureAsset(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  System_Object_array *Instance; // x0
  __int64 v4; // x1
  AssetManager_o *v5; // x20
  AssetManager_o *v6; // x20
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8
  int32_t size; // w2
  int v9; // w9
  struct System_Collections_Generic_List_string__o *unloadTargetPathList; // x8
  int32_t v11; // w2
  int v12; // w9

  if ( (byte_4CE9515 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CE9515 = 1;
  }
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !this->fields.thumbnailPathList )
    goto LABEL_14;
  v5 = (AssetManager_o *)Instance;
  Instance = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)this->fields.thumbnailPathList,
               (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
  if ( !v5 )
    goto LABEL_14;
  AssetManager__CancelAndReleaseDownloadAssetStorages(v5, (System_String_array *)Instance, 0);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !this->fields.thumbnailPathList )
    goto LABEL_14;
  v6 = (AssetManager_o *)Instance;
  Instance = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)this->fields.thumbnailPathList,
               (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
  if ( !v6 )
    goto LABEL_14;
  AssetManager__ReleaseAssetStorageAll(v6, (System_String_array *)Instance, 0);
  thumbnailPathList = this->fields.thumbnailPathList;
  if ( !thumbnailPathList )
    goto LABEL_14;
  size = thumbnailPathList->fields._size;
  v9 = thumbnailPathList->fields._version + 1;
  thumbnailPathList->fields._size = 0;
  thumbnailPathList->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)thumbnailPathList->fields._items, 0, size, 0);
  unloadTargetPathList = this->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
LABEL_14:
    sub_1C7BD40(Instance, v4);
  v11 = unloadTargetPathList->fields._size;
  v12 = unloadTargetPathList->fields._version + 1;
  unloadTargetPathList->fields._size = 0;
  unloadTargetPathList->fields._version = v12;
  if ( v11 >= 1 )
    System_Array__Clear((System_Array_o *)unloadTargetPathList->fields._items, 0, v11, 0);
}


void CGThumbnailListViewManager__add_callbackFunc(
        CGThumbnailListViewManager_o *this,
        CGThumbnailListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CGThumbnailListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CGThumbnailListViewManager_o *v10; // x0
  CGThumbnailListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CE9507 & 1) == 0 )
  {
    sub_1C7BAE8(&CGThumbnailListViewManager_CallbackFunc_TypeInfo);
    byte_4CE9507 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CGThumbnailListViewManager_CallbackFunc_c *)v7->klass != CGThumbnailListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CGThumbnailListViewManager_o *)sub_1C7C0DC(v7);
  CGThumbnailListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_int__o *CGThumbnailListViewManager__get_GalleryIdList(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  CGThumbnailListViewManager___c_c *v3; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  System_Converter_TInput__TOutput__o *_9__14_0; // x20
  Il2CppObject *v6; // x21
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_TOutput__o *v14; // x0
  CGThumbnailListViewManager___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__int__o *_9__14_1; // x20
  Il2CppObject *v18; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4CE9505 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C7BAE8(&System_Func_CGThumbnailListItem__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_0__);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_1__);
    sub_1C7BAE8(&CGThumbnailListViewManager___c_TypeInfo);
    byte_4CE9505 = 1;
  }
  v3 = CGThumbnailListViewManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v3 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__14_0 = (System_Converter_TInput__TOutput__o *)v3->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__14_0 = (System_Converter_TInput__TOutput__o *)sub_1C7BD34(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    System_Converter_object__object____ctor(
      _9__14_0,
      v6,
      Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_0__,
      0);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)_9__14_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !itemList )
    sub_1C7BD40(v3, method);
  v14 = System_Collections_Generic_List_object___ConvertAll_object_(
          (System_Collections_Generic_List_object__o *)itemList,
          (System_Converter_T__TOutput__o *)_9__14_0,
          (const MethodInfo_3096758 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
  v15 = CGThumbnailListViewManager___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v15 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__14_1 = (System_Func_object__int__o *)v15->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__14_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_CGThumbnailListItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_1,
      v18,
      Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_1__,
      0);
    v19 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v19->__9__14_1 = (struct System_Func_CGThumbnailListItem__int__o *)_9__14_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v19->__9__14_1, (int32_t)_9__14_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__14_1,
                                                               (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v26,
                                                     (const MethodInfo_31B3C14 *)Method_System_Linq_Enumerable_ToList_int___);
}


System_Collections_Generic_List_CGThumbnailObject__o *CGThumbnailListViewManager__get_ObjectList(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CE9509 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CGThumbnailObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CGThumbnailObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CGThumbnailObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_CGThumbnailObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9509 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_CGThumbnailObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_CGThumbnailObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CGThumbnailObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_CGThumbnailObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CGThumbnailObject__o *)v3;
}


System_Collections_Generic_List_int__o *CGThumbnailListViewManager__get_SortGalleryIdList(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  CGThumbnailListViewManager___c_c *v3; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x19
  System_Converter_TInput__TOutput__o *_9__16_0; // x20
  Il2CppObject *v6; // x21
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_TOutput__o *v14; // x0
  CGThumbnailListViewManager___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__int__o *_9__16_1; // x20
  Il2CppObject *v18; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4CE9506 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C7BAE8(&System_Func_CGThumbnailListItem__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_0__);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_1__);
    sub_1C7BAE8(&CGThumbnailListViewManager___c_TypeInfo);
    byte_4CE9506 = 1;
  }
  v3 = CGThumbnailListViewManager___c_TypeInfo;
  itemSortList = this->fields.itemSortList;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v3 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__16_0 = (System_Converter_TInput__TOutput__o *)v3->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__16_0 = (System_Converter_TInput__TOutput__o *)sub_1C7BD34(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    System_Converter_object__object____ctor(
      _9__16_0,
      v6,
      Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_0__,
      0);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)_9__16_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !itemSortList )
    sub_1C7BD40(v3, method);
  v14 = System_Collections_Generic_List_object___ConvertAll_object_(
          (System_Collections_Generic_List_object__o *)itemSortList,
          (System_Converter_T__TOutput__o *)_9__16_0,
          (const MethodInfo_3096758 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
  v15 = CGThumbnailListViewManager___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v15 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__int__o *)v15->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_CGThumbnailListItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__16_1,
      v18,
      Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_1__,
      0);
    v19 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v19->__9__16_1 = (struct System_Func_CGThumbnailListItem__int__o *)_9__16_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v19->__9__16_1, (int32_t)_9__16_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v26,
                                                     (const MethodInfo_31B3C14 *)Method_System_Linq_Enumerable_ToList_int___);
}


void CGThumbnailListViewManager__remove_callbackFunc(
        CGThumbnailListViewManager_o *this,
        CGThumbnailListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CGThumbnailListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CGThumbnailListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CE9508 & 1) == 0 )
  {
    sub_1C7BAE8(&CGThumbnailListViewManager_CallbackFunc_TypeInfo);
    byte_4CE9508 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CGThumbnailListViewManager_CallbackFunc_c *)v7->klass != CGThumbnailListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CGThumbnailListViewManager_o *)sub_1C7C0DC(v7);
  CGThumbnailListViewManager__get_ObjectList(v10, v11);
}


void CGThumbnailListViewManager_CallbackFunc___ctor(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA9BBC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA9B74;
}


System_IAsyncResult_o *CGThumbnailListViewManager_CallbackFunc__BeginInvoke(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        int32_t thumbnailIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = thumbnailIndex;
  if ( (byte_4CE9518 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    byte_4CE9518 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void CGThumbnailListViewManager_CallbackFunc__EndInvoke(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void CGThumbnailListViewManager_CallbackFunc__Invoke(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        int32_t thumbnailIndex,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    thumbnailIndex,
    this->fields.method);
}


void CGThumbnailListViewManager__SelectItemCoroutine_d__40___ctor(
        CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CGThumbnailListViewManager__SelectItemCoroutine_d__40__MoveNext(
        CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *v8; // x19
  int32_t _1__state; // w8
  struct CGThumbnailListViewManager_o *_4__this; // x20
  GalleryResourceMaster_o *v11; // x21
  System_Collections_Generic_List_object__o *EnableGalleryResourceEntityListByGalleryId; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o *v19; // x21
  Il2CppObject *Instance; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_String_o *AssetPath; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct CommonUI_o *commonUI_5__2; // x8
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *v41; // x20
  Il2CppObject **p__8__1; // x23
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  CommonUI_o *v49; // x20
  int32_t v50; // w21
  Il2CppObject *v51; // x24
  CommonConfirmDialog_ClickDelegate_o *v52; // x22
  Il2CppObject *v53; // x24
  System_Action_o *v54; // x23
  struct CGThumbnailListViewManager___c__DisplayClass40_0_o *_8__1; // x8
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct CGThumbnailListViewManager_CallbackFunc_o *callbackFunc; // x21
  struct CGThumbnailListViewManager___c__DisplayClass40_0_o *v63; // x22
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  CommonUI_o *v66; // x20
  System_String_o *movieFolder_5__3; // x21
  System_Action_o *v68; // x23
  System_Collections_IEnumerator_o *v69; // x0
  GrandQuestFolderBoardItem_o *v70; // x19
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7

  v8 = this;
  if ( (byte_4CE951E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GalleryResourceMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager___c__DisplayClass40_0__SelectItemCoroutine_b__0__);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager___c__DisplayClass40_0__SelectItemCoroutine_b__1__);
    sub_1C7BAE8(&Method_CGThumbnailListViewManager___c__DisplayClass40_0__SelectItemCoroutine_b__2__);
    this = (CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *)sub_1C7BAE8(&CGThumbnailListViewManager___c__DisplayClass40_0_TypeInfo);
    byte_4CE951E = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    this = (CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *)&v8->fields.__8__1;
    _8__1 = v8->fields.__8__1;
    v8->fields.__1__state = -1;
    if ( !_8__1 )
      goto LABEL_37;
    if ( !_8__1->fields.isCancel )
    {
      this->klass = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
      goto LABEL_26;
    }
    return 0;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_30;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  if ( !_4__this )
    goto LABEL_37;
  v11 = (GalleryResourceMaster_o *)this;
  this = (CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *)CGThumbnailListViewManager__get_GalleryIdList(
                                                                      _4__this,
                                                                      method);
  if ( !this )
    goto LABEL_37;
  this = (CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *)System_Collections_Generic_List_int___get_Item(
                                                                      (System_Collections_Generic_List_int__o *)this,
                                                                      v8->fields.index,
                                                                      (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !v11 )
    goto LABEL_37;
  EnableGalleryResourceEntityListByGalleryId = (System_Collections_Generic_List_object__o *)GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
                                                                                              v11,
                                                                                              (int32_t)this,
                                                                                              0);
  if ( !EnableGalleryResourceEntityListByGalleryId )
    goto LABEL_27;
  v19 = EnableGalleryResourceEntityListByGalleryId;
  if ( EnableGalleryResourceEntityListByGalleryId->fields._size < 1 )
    goto LABEL_27;
  this = (CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *)System_Collections_Generic_List_object___get_Item(
                                                                      EnableGalleryResourceEntityListByGalleryId,
                                                                      0,
                                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
  if ( !this )
    goto LABEL_37;
  if ( GalleryResourceEntity__GetDownloadType((GalleryResourceEntity_o *)this, 0) != 1 )
    goto LABEL_27;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8->fields._commonUI_5__2 = (struct CommonUI_o *)Instance;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v8->fields._commonUI_5__2,
    (int32_t)Instance,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this = (CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *)System_Collections_Generic_List_object___get_Item(
                                                                      v19,
                                                                      0,
                                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
  if ( !this )
    goto LABEL_37;
  AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0);
  v8->fields._movieFolder_5__3 = AssetPath;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v8->fields._movieFolder_5__3,
    (int32_t)AssetPath,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  commonUI_5__2 = v8->fields._commonUI_5__2;
  if ( !commonUI_5__2 )
    goto LABEL_37;
  this = (CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *)commonUI_5__2->fields._MovieFileMerge_k__BackingField;
  if ( !this )
    goto LABEL_37;
  if ( MovieFileMerge__ExistCRCCheckedMovieFile((MovieFileMerge_o *)this, v8->fields._movieFolder_5__3, 0) )
  {
LABEL_26:
    v8->fields._commonUI_5__2 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._commonUI_5__2, 0, v35, v36, v37, v38, v39, v40);
    v8->fields._movieFolder_5__3 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._movieFolder_5__3, 0, v56, v57, v58, v59, v60, v61);
    if ( !_4__this )
      goto LABEL_37;
LABEL_27:
    callbackFunc = _4__this->fields.callbackFunc;
    _4__this->fields.callbackFunc = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&_4__this->fields.callbackFunc, 0, v13, v14, v15, v16, v17, v18);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        (unsigned int)v8->fields.index,
        callbackFunc->fields.method);
    return 0;
  }
  v41 = (Il2CppObject *)sub_1C7BD34(CGThumbnailListViewManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor(v41, 0);
  v8->fields.__8__1 = (struct CGThumbnailListViewManager___c__DisplayClass40_0_o *)v41;
  p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v41, v43, v44, v45, v46, v47, v48);
  if ( !v8->fields.__8__1 )
    goto LABEL_37;
  v8->fields.__8__1->fields = (CGThumbnailListViewManager___c__DisplayClass40_0_Fields)256;
  v49 = v8->fields._commonUI_5__2;
  this = (CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *)System_Collections_Generic_List_object___get_Item(
                                                                      v19,
                                                                      0,
                                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
  if ( !this )
    goto LABEL_37;
  v50 = (int32_t)this->fields.__8__1;
  v51 = *p__8__1;
  v52 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v52,
    v51,
    Method_CGThumbnailListViewManager___c__DisplayClass40_0__SelectItemCoroutine_b__0__,
    0);
  v53 = *p__8__1;
  v54 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v54, v53, Method_CGThumbnailListViewManager___c__DisplayClass40_0__SelectItemCoroutine_b__1__, 0);
  if ( !v49 )
    goto LABEL_37;
  CommonUI__OpenDownloadMovieDialog(v49, v50, -1, v52, v54, 0, 0);
LABEL_30:
  v63 = v8->fields.__8__1;
  if ( !v63 )
    goto LABEL_37;
  if ( v63->fields.isWaitDialog )
  {
    v8->fields.__2__current = 0;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C7BA8C(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return result;
  }
  if ( v63->fields.isCancel )
    return 0;
  v66 = v8->fields._commonUI_5__2;
  movieFolder_5__3 = v8->fields._movieFolder_5__3;
  v68 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v68,
    (Il2CppObject *)v63,
    Method_CGThumbnailListViewManager___c__DisplayClass40_0__SelectItemCoroutine_b__2__,
    0);
  if ( !v66 )
LABEL_37:
    sub_1C7BD40(this, method);
  v69 = CommonUI__DownloadMovieAndWaitUI(v66, movieFolder_5__3, 0, v68, 0, 0, 0);
  v8->fields.__2__current = (Il2CppObject *)v69;
  v70 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C7BA8C(v70, (int32_t)v69, v71, v72, v73, v74, v75, v76);
  LODWORD(v70[-1].fields._ClosedMessage_k__BackingField) = 2;
  return 1;
}


Il2CppObject *CGThumbnailListViewManager__SelectItemCoroutine_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CGThumbnailListViewManager__SelectItemCoroutine_d__40__System_Collections_IEnumerator_Reset(
        CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_CGThumbnailListViewManager__SelectItemCoroutine_d__40_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *CGThumbnailListViewManager__SelectItemCoroutine_d__40__System_Collections_IEnumerator_get_Current(
        CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CGThumbnailListViewManager__SelectItemCoroutine_d__40__System_IDisposable_Dispose(
        CGThumbnailListViewManager__SelectItemCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  ;
}


void CGThumbnailListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CE9519 & 1) == 0 )
  {
    sub_1C7BAE8(&CGThumbnailListViewManager___c_TypeInfo);
    byte_4CE9519 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(CGThumbnailListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CGThumbnailListViewManager___c_TypeInfo->static_fields->__9 = (struct CGThumbnailListViewManager___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)CGThumbnailListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CGThumbnailListViewManager___c___ctor(CGThumbnailListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CGThumbnailListViewManager___c___CreateList_b__26_0(
        CGThumbnailListViewManager___c_o *this,
        GalleryEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.priority;
}


CGThumbnailListItem_o *CGThumbnailListViewManager___c___JumpItemForID_b__37_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4CE951C & 1) == 0 )
  {
    sub_1C7BAE8(&CGThumbnailListItem_TypeInfo);
    byte_4CE951C = 1;
  }
  if ( !x )
    return 0;
  naturalAligment = CGThumbnailListItem_TypeInfo->_2.naturalAligment;
  if ( x->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CGThumbnailListItem_c *)x->klass->_2.typeHierarchy[naturalAligment - 1] == CGThumbnailListItem_TypeInfo )
    return (CGThumbnailListItem_o *)x;
  return 0;
}


CGThumbnailListItem_o *CGThumbnailListViewManager___c___get_GalleryIdList_b__14_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4CE951A & 1) == 0 )
  {
    sub_1C7BAE8(&CGThumbnailListItem_TypeInfo);
    byte_4CE951A = 1;
  }
  if ( !x )
    return 0;
  naturalAligment = CGThumbnailListItem_TypeInfo->_2.naturalAligment;
  if ( x->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CGThumbnailListItem_c *)x->klass->_2.typeHierarchy[naturalAligment - 1] == CGThumbnailListItem_TypeInfo )
    return (CGThumbnailListItem_o *)x;
  return 0;
}


int32_t CGThumbnailListViewManager___c___get_GalleryIdList_b__14_1(
        CGThumbnailListViewManager___c_o *this,
        CGThumbnailListItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields._Id_k__BackingField;
}


CGThumbnailListItem_o *CGThumbnailListViewManager___c___get_SortGalleryIdList_b__16_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4CE951B & 1) == 0 )
  {
    sub_1C7BAE8(&CGThumbnailListItem_TypeInfo);
    byte_4CE951B = 1;
  }
  if ( !x )
    return 0;
  naturalAligment = CGThumbnailListItem_TypeInfo->_2.naturalAligment;
  if ( x->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CGThumbnailListItem_c *)x->klass->_2.typeHierarchy[naturalAligment - 1] == CGThumbnailListItem_TypeInfo )
    return (CGThumbnailListItem_o *)x;
  return 0;
}


int32_t CGThumbnailListViewManager___c___get_SortGalleryIdList_b__16_1(
        CGThumbnailListViewManager___c_o *this,
        CGThumbnailListItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields._Id_k__BackingField;
}


void CGThumbnailListViewManager___c__DisplayClass26_0___ctor(
        CGThumbnailListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CGThumbnailListViewManager___c__DisplayClass26_0___CreateList_b__1(
        CGThumbnailListViewManager___c__DisplayClass26_0_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  CGThumbnailListViewManager___c__DisplayClass26_0_o *v4; // x20
  int32_t galleryId; // w19

  v4 = this;
  if ( (byte_4CE951D & 1) == 0 )
  {
    this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_GalleryEntity__get_Item__);
    byte_4CE951D = 1;
  }
  if ( !x
    || (this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)v4->fields.thumbnailEntityList) == 0
    || (galleryId = x->fields.galleryId,
        (this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                        (System_Collections_Generic_List_object__o *)this,
                                                                        v4->fields.i,
                                                                        (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GalleryEntity__get_Item__)) == 0) )
  {
    sub_1C7BD40(this, x);
  }
  return galleryId == LODWORD(this->fields.thumbnailEntityList);
}


void CGThumbnailListViewManager___c__DisplayClass37_0___ctor(
        CGThumbnailListViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CGThumbnailListViewManager___c__DisplayClass37_0___JumpItemForID_b__1(
        CGThumbnailListViewManager___c__DisplayClass37_0_o *this,
        CGThumbnailListItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields._Id_k__BackingField == this->fields.galleryId;
}


void CGThumbnailListViewManager___c__DisplayClass40_0___ctor(
        CGThumbnailListViewManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CGThumbnailListViewManager___c__DisplayClass40_0___SelectItemCoroutine_b__0(
        CGThumbnailListViewManager___c__DisplayClass40_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  this->fields.isCancel = !isDecide;
}


void CGThumbnailListViewManager___c__DisplayClass40_0___SelectItemCoroutine_b__1(
        CGThumbnailListViewManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  this->fields.isWaitDialog = 0;
}


void CGThumbnailListViewManager___c__DisplayClass40_0___SelectItemCoroutine_b__2(
        CGThumbnailListViewManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  this->fields.isCancel = 1;
}
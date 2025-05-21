void __fastcall CGThumbnailListViewManager___ctor(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isCG = 257;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CGThumbnailListViewManager__ChangeIconScale(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListViewManager_o *v4; // x19
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CGThumbnailListViewManager_o *v7; // x0
  int v8; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  struct ListViewSort_o *sort; // x8
  int32_t v11; // w1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4B3FB30 & 1) == 0 )
  {
    this = (CGThumbnailListViewManager_o *)sub_1BDB878(&StringLiteral_7034/*"GalleryListItemScale"*/, method);
    byte_4B3FB30 = 1;
  }
  scaleType = v4->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = v4->fields.smallSizeSeed;
    v7 = v4;
    v8 = 2;
    goto LABEL_9;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = v4->fields.extremelySmallSizeSeed;
    v7 = v4;
    v8 = 3;
    goto LABEL_9;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = v4->fields.normalSizeSeed;
    v7 = v4;
    v8 = 1;
LABEL_9:
    v7->fields.seed = smallSizeSeed;
    p_seed = &v7->fields.seed;
    *((_DWORD *)p_seed + 66) = v8;
    sub_1BDB81C((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = v4->fields.sort;
  if ( !sort )
    goto LABEL_14;
  v11 = v4->fields.scaleType;
  sort->fields.iconScaleKind = v11;
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7034/*"GalleryListItemScale"*/, v11, 0LL);
  CGThumbnailListViewManager__ModifyList(v4, 1, v12);
  CGThumbnailListViewManager__SetMode(v4, 2, v13);
  ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0LL);
  this = (CGThumbnailListViewManager_o *)v4->fields.scrollBar;
  if ( !this
    || (this = (CGThumbnailListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BDBAD4(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall CGThumbnailListViewManager__CreateList(
        CGThumbnailListViewManager_o *this,
        System_Collections_Generic_List_GalleryEntity__o *thumbnailList,
        bool isCgFlag,
        bool isMovieFlag,
        CGThumbnailListViewManager_CallbackFunc_o *listItemCallback,
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x20
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct ListViewSort_o *sort; // x24
  void *Int; // x0
  __int64 v46; // x1
  UILabel_o *emptyMessageLabel; // x24
  struct ListViewSort_o *v48; // x19
  CGThumbnailListViewManager___c_c *v49; // x0
  System_Func_object__int__o *_9__26_0; // x22
  Il2CppObject *v51; // x19
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  CGThumbnailListViewManager_o *v58; // x21
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8
  System_Collections_Generic_List_object__o *v60; // x21
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_List_object__o *v63; // x19
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t size; // w2
  int v67; // w9
  struct System_Collections_Generic_List_string__o *unloadTargetPathList; // x8
  int32_t v69; // w2
  int v70; // w9
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Func_object__bool__o **v73; // x23
  Il2CppObject *Item; // x0
  System_Func_object__bool__o *v75; // x25
  Il2CppObject *v76; // x24
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_Collections_Generic_List_object__o *v80; // x25
  int32_t v81; // w27
  _DWORD *v82; // x26
  int32_t v83; // w19
  int32_t v84; // w28
  int64_t v85; // x29
  System_String_o *v86; // x1
  int v87; // w27
  Il2CppClass *klass; // d8
  int v89; // w26
  int v90; // w25
  System_String_o *v91; // x19
  __int64 v92; // x24
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  __int64 v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  __int64 v100; // x8
  struct ListViewSort_o *v101; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *scrollBar; // x19
  struct UIScrollBar_o *v105; // x8
  struct ListViewSort_o *v106; // x8
  int32_t v107; // w1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UserGameEntity_o *SelfUserGame; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-68h]

  if ( (byte_4B3FB2B & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_GetValue_string___, thumbnailList);
    sub_1BDB878(&CGThumbnailListItem_TypeInfo, v10);
    sub_1BDB878(&CondType_TypeInfo, v11);
    sub_1BDB878(&Method_DataManager_GetMaster_GalleryResourceMaster___, v12);
    sub_1BDB878(&DataManager_TypeInfo, v13);
    sub_1BDB878(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__getEntityList__, v14);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderBy_GalleryEntity__int___, v15);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_GalleryEntity___, v16);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___, v17);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___, v18);
    sub_1BDB878(&System_Func_GalleryResourceEntity__bool__TypeInfo, v19);
    sub_1BDB878(&System_Func_GalleryEntity__int__TypeInfo, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Clear__, v22);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v23);
    sub_1BDB878(&Method_System_Collections_Generic_List_GalleryEntity__get_Count__, v24);
    sub_1BDB878(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__, v25);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v26);
    sub_1BDB878(&Method_System_Collections_Generic_List_GalleryEntity__get_Item__, v27);
    sub_1BDB878(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__, v28);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v29);
    sub_1BDB878(&LocalizationManager_TypeInfo, v30);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v31);
    sub_1BDB878(&Method_CGThumbnailListViewManager___c__CreateList_b__26_0__, v32);
    sub_1BDB878(&Method_CGThumbnailListViewManager___c__DisplayClass26_0__CreateList_b__1__, v33);
    sub_1BDB878(&CGThumbnailListViewManager___c__DisplayClass26_0_TypeInfo, v34);
    sub_1BDB878(&CGThumbnailListViewManager___c_TypeInfo, v35);
    sub_1BDB878(&StringLiteral_7034/*"GalleryListItemScale"*/, v36);
    sub_1BDB878(&StringLiteral_6929/*"GALLERY_NO_THUMBNAIL"*/, v37);
    sub_1BDB878(&StringLiteral_9218/*"MyRoom/Gallery/Thumbnail/"*/, v38);
    sub_1BDB878(&StringLiteral_7032/*"GalleryAscendingOrder"*/, v39);
    sub_1BDB878(&StringLiteral_21426/*"maleThumbnailName"*/, v40);
    byte_4B3FB2B = 1;
  }
  v41 = sub_1BDBAC4(CGThumbnailListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.callbackFunc = listItemCallback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)listItemCallback, v42, v43);
  sort = this->fields.sort;
  Int = (void *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7032/*"GalleryAscendingOrder"*/, 1, 0LL);
  if ( !sort )
    goto LABEL_77;
  sort->fields.isAscendingOrder = (_DWORD)Int == 1;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_6929/*"GALLERY_NO_THUMBNAIL"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_77;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Int, 0LL);
  Int = this->fields.sort;
  this->fields.isCG = isCgFlag;
  this->fields.isMovie = isMovieFlag;
  if ( !Int )
    goto LABEL_77;
  ListViewSort__SetFilter((ListViewSort_o *)Int, 100, isCgFlag, 0LL);
  Int = this->fields.sort;
  if ( !Int )
    goto LABEL_77;
  ListViewSort__SetFilter((ListViewSort_o *)Int, 101, this->fields.isMovie, 0LL);
  v48 = this->fields.sort;
  Int = (void *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7034/*"GalleryListItemScale"*/, 1, 0LL);
  if ( !v48 )
    goto LABEL_77;
  v48->fields.iconScaleKind = (int)Int;
  v49 = CGThumbnailListViewManager___c_TypeInfo;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v49 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__26_0 = (System_Func_object__int__o *)v49->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v49->static_fields->__9;
    _9__26_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_GalleryEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__26_0, v51, Method_CGThumbnailListViewManager___c__CreateList_b__26_0__, 0LL);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Func_GalleryEntity__int__o *)_9__26_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)thumbnailList,
                                                               (System_Func_TSource__TKey__o *)_9__26_0,
                                                               (const MethodInfo_305F578 *)Method_System_Linq_Enumerable_OrderBy_GalleryEntity__int___);
  Int = System_Linq_Enumerable__ToList_object_(
          v55,
          (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_GalleryEntity___);
  if ( !v41 )
    goto LABEL_77;
  *(_QWORD *)(v41 + 16) = Int;
  sub_1BDB81C((CGThumbnailListItem_o *)(v41 + 16), (int32_t)Int, v56, v57);
  v58 = this;
  thumbnailPathList = this->fields.thumbnailPathList;
  if ( !thumbnailPathList )
  {
    v60 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v60,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.thumbnailPathList = (struct System_Collections_Generic_List_string__o *)v60;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.thumbnailPathList, (int32_t)v60, v61, v62);
    v58 = this;
    v63 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v63,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)v63;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.unloadTargetPathList, (int32_t)v63, v64, v65);
    thumbnailPathList = this->fields.thumbnailPathList;
    if ( !thumbnailPathList )
      goto LABEL_77;
  }
  size = thumbnailPathList->fields._size;
  v67 = thumbnailPathList->fields._version + 1;
  thumbnailPathList->fields._size = 0;
  thumbnailPathList->fields._version = v67;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)thumbnailPathList->fields._items, 0, size, 0LL);
  unloadTargetPathList = v58->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
    goto LABEL_77;
  v69 = unloadTargetPathList->fields._size;
  v70 = unloadTargetPathList->fields._version + 1;
  unloadTargetPathList->fields._size = 0;
  unloadTargetPathList->fields._version = v70;
  if ( v69 >= 1 )
    System_Array__Clear((System_Array_o *)unloadTargetPathList->fields._items, 0, v69, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Int = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  if ( !Int )
    goto LABEL_77;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  *((System_Collections_Generic_IEnumerable_TSource__o **)Int
                                                                  + 5),
                                                                  (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
  Int = *(void **)(v41 + 16);
  *(_DWORD *)(v41 + 24) = 0;
  if ( !Int )
    goto LABEL_77;
  v46 = 0LL;
  v73 = (System_Func_object__bool__o **)(v41 + 32);
  while ( (int)v46 < *((_DWORD *)Int + 6) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Int,
             v46,
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GalleryEntity__get_Item__);
    v75 = *v73;
    v76 = Item;
    if ( !*v73 )
    {
      v75 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_GalleryResourceEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v75,
        (Il2CppObject *)v41,
        Method_CGThumbnailListViewManager___c__DisplayClass26_0__CreateList_b__1__,
        0LL);
      *(_QWORD *)(v41 + 32) = v75;
      sub_1BDB81C((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v75, v77, v78);
    }
    v79 = System_Linq_Enumerable__Where_object_(
            source,
            (System_Func_TSource__bool__o *)v75,
            (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    Int = System_Linq_Enumerable__ToList_object_(
            v79,
            (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Int )
      goto LABEL_77;
    v80 = (System_Collections_Generic_List_object__o *)Int;
    if ( *((int *)Int + 6) >= 1 )
    {
      v81 = 0;
      while ( 1 )
      {
        Int = System_Collections_Generic_List_object___get_Item(
                v80,
                v81,
                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
        if ( !Int )
          goto LABEL_77;
        v82 = Int;
        v83 = *((_DWORD *)Int + 13);
        v84 = *((_DWORD *)Int + 14);
        v85 = *((int *)Int + 15);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(v83, v84, v85, 0, 0LL, 0LL) )
          break;
        if ( ++v81 >= v80->fields._size )
          goto LABEL_51;
      }
      Int = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_77;
      Int = (void *)UserGameEntity__IsMale(SelfUserGame, 0LL);
      if ( !v76 )
        goto LABEL_77;
      v86 = ((unsigned __int8)Int & 1) != 0
          ? (System_String_o *)BasicHelper__GetValue_object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)v76[2].monitor,
                                 (System_String_o *)StringLiteral_21426/*"maleThumbnailName"*/,
                                 (Il2CppObject *)v76[2].klass,
                                 (const MethodInfo_30213D0 *)Method_BasicHelper_GetValue_string___)
          : (System_String_o *)v76[2].klass;
      v87 = *(_DWORD *)(v41 + 24);
      klass = v76[1].klass;
      v89 = v82[6];
      v90 = v80->fields._size;
      v91 = System_String__Concat_62572260((System_String_o *)StringLiteral_9218/*"MyRoom/Gallery/Thumbnail/"*/, v86, 0LL);
      v92 = sub_1BDBAC4(CGThumbnailListItem_TypeInfo);
      ListViewItem___ctor((ListViewItem_o *)v92, 0LL);
      *(_DWORD *)(v92 + 20) = v87;
      *(_QWORD *)(v92 + 112) = klass;
      *(_DWORD *)(v92 + 120) = v89;
      *(_BYTE *)(v92 + 124) = v90 > 1;
      *(_BYTE *)(v92 + 125) = 1;
      *(_QWORD *)(v92 + 128) = v91;
      sub_1BDB81C((CGThumbnailListItem_o *)(v92 + 128), (int32_t)v91, v93, v94);
      Int = this->fields.itemList;
      if ( !Int )
        goto LABEL_77;
      v97 = *((_QWORD *)Int + 2);
      v98 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)Int + 7);
      if ( !v97 )
        goto LABEL_77;
      v99 = *((int *)Int + 6);
      if ( (unsigned int)v99 >= *(_DWORD *)(v97 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Int,
          (Il2CppObject *)v92,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = v97 + 8 * v99;
        *((_DWORD *)Int + 6) = v99 + 1;
        *(_QWORD *)(v100 + 32) = v92;
        sub_1BDB81C((CGThumbnailListItem_o *)(v100 + 32), v92, v95, v96);
      }
    }
LABEL_51:
    Int = *(void **)(v41 + 16);
    v46 = (unsigned int)(*(_DWORD *)(v41 + 24) + 1);
    *(_DWORD *)(v41 + 24) = v46;
    if ( !Int )
      goto LABEL_77;
  }
  v101 = this->fields.sort;
  if ( !v101 )
    goto LABEL_77;
  iconScaleKind = v101->fields.iconScaleKind;
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v71, v72);
LABEL_61:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    Int = this->fields.scrollBar;
    if ( Int )
    {
      Int = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0LL);
      if ( Int )
      {
        Int = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Int, 0LL);
        if ( ((unsigned __int8)Int & 1) == 0 )
          return;
        v105 = this->fields.scrollBar;
        if ( v105 )
        {
          if ( v105->fields.mSize > 0.98 )
            return;
          v106 = this->fields.sort;
          if ( v106 )
          {
            if ( v106->fields.isAscendingOrder )
            {
              v107 = 0;
            }
            else
            {
              itemSortList = this->fields.itemSortList;
              if ( !itemSortList )
                goto LABEL_77;
              v107 = itemSortList->fields._size - 1;
            }
            ListViewManager__JumpItem((ListViewManager_o *)this, v107, 0LL);
            Int = this->fields.scrollBar;
            if ( Int )
            {
              UIProgressBar__set_value((UIProgressBar_o *)Int, 0.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_77:
    sub_1BDBAD4(Int, v46);
  }
}


System_String_o *__fastcall CGThumbnailListViewManager__GetScaleButtonSpriteName(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BDBAD4(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CGThumbnailListViewManager__JumpItemForID(
        CGThumbnailListViewManager_o *this,
        int32_t galleryId,
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
  __int64 v13; // x20
  void *gameObject; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v17; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Converter_TInput__TOutput__o *v19; // x22
  Il2CppObject *v20; // x23
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_TOutput__o *v24; // x21
  System_Func_object__bool__o *v25; // x22
  Il2CppObject *v26; // x0
  int32_t klass_high; // w1

  if ( (byte_4B3FB33 & 1) == 0 )
  {
    sub_1BDB878(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo, *(_QWORD *)&galleryId);
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_CGThumbnailListItem___, v5);
    sub_1BDB878(&System_Func_CGThumbnailListItem__bool__TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    sub_1BDB878(&Method_CGThumbnailListViewManager___c__JumpItemForID_b__37_0__, v9);
    sub_1BDB878(&Method_CGThumbnailListViewManager___c__DisplayClass37_0__JumpItemForID_b__1__, v10);
    sub_1BDB878(&CGThumbnailListViewManager___c__DisplayClass37_0_TypeInfo, v11);
    sub_1BDB878(&CGThumbnailListViewManager___c_TypeInfo, v12);
    byte_4B3FB33 = 1;
  }
  v13 = sub_1BDBAC4(CGThumbnailListViewManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_24;
  *(_DWORD *)(v13 + 16) = galleryId;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    gameObject = this->fields.scrollBar;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        gameObject = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          return;
        v17 = this->fields.scrollBar;
        if ( v17 )
        {
          if ( v17->fields.mSize > 0.98 )
            return;
          itemList = this->fields.itemList;
          gameObject = CGThumbnailListViewManager___c_TypeInfo;
          if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
            gameObject = CGThumbnailListViewManager___c_TypeInfo;
          }
          v19 = *(System_Converter_TInput__TOutput__o **)(*((_QWORD *)gameObject + 23) + 48LL);
          if ( !v19 )
          {
            if ( !*((_DWORD *)gameObject + 56) )
            {
              j_il2cpp_runtime_class_init_0(gameObject);
              gameObject = CGThumbnailListViewManager___c_TypeInfo;
            }
            v20 = (Il2CppObject *)**((_QWORD **)gameObject + 23);
            v19 = (System_Converter_TInput__TOutput__o *)sub_1BDBAC4(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
            System_Converter_object__object____ctor(
              v19,
              v20,
              Method_CGThumbnailListViewManager___c__JumpItemForID_b__37_0__,
              0LL);
            static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__37_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)v19;
            sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__37_0, (int32_t)v19, v22, v23);
          }
          if ( itemList )
          {
            v24 = System_Collections_Generic_List_object___ConvertAll_object_(
                    (System_Collections_Generic_List_object__o *)itemList,
                    (System_Converter_T__TOutput__o *)v19,
                    (const MethodInfo_2F62ED4 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
            v25 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_CGThumbnailListItem__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v25,
              (Il2CppObject *)v13,
              Method_CGThumbnailListViewManager___c__DisplayClass37_0__JumpItemForID_b__1__,
              0LL);
            v26 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                    (System_Func_TSource__bool__o *)v25,
                    (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_CGThumbnailListItem___);
            if ( v26 )
              klass_high = HIDWORD(v26[1].klass);
            else
              klass_high = 0;
            ListViewManager__SetTopItem((ListViewManager_o *)this, klass_high, 0LL);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1BDBAD4(gameObject, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CGThumbnailListViewManager__ModifyList(
        CGThumbnailListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v10; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v12; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4B3FB2F & 1) == 0 )
  {
    sub_1BDB878(&CGThumbnailListItem_TypeInfo, isIconSizeChange);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B3FB2F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1BDBAD4(itemList, isIconSizeChange);
  size = itemList->fields._size;
  if ( size >= 1 && isIconSizeChange )
  {
    v10 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v10,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v12 = (ListViewItem_o *)Item;
        methodPtr_low = LOBYTE(CGThumbnailListItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (CGThumbnailListItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CGThumbnailListItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            itemList = (System_Collections_Generic_List_object__o *)v12->fields.viewObject;
            if ( !itemList )
              goto LABEL_17;
            ListViewObject__SetItemSeed((ListViewObject_o *)itemList, v12, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v10 )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_17;
    }
  }
}


void __fastcall CGThumbnailListViewManager__OnClickListView(
        CGThumbnailListViewManager_o *this,
        CGThumbnailObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct CGThumbnailListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  unsigned int Index; // w0

  if ( (byte_4B3FB34 & 1) == 0 )
  {
    sub_1BDB878(&Method_CGThumbnailListViewManager_OnClickListView__, obj);
    byte_4B3FB34 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    v7 = Method_CGThumbnailListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_CGThumbnailListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BDB890(Method_CGThumbnailListViewManager_OnClickListView__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BDBAD4(v9, v10);
      Index = ListViewObject__get_Index((ListViewObject_o *)obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall CGThumbnailListViewManager__OnClickSortAscendingOrder(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w9

  if ( (byte_4B3FB32 & 1) == 0 )
  {
    sub_1BDB878(&Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__, method);
    sub_1BDB878(&StringLiteral_7032/*"GalleryAscendingOrder"*/, v3);
    byte_4B3FB32 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BDB890(Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BDBAD4(v6, v7);
    isAscendingOrder = sort->fields.isAscendingOrder;
    sort->fields.isAscendingOrder = !isAscendingOrder;
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7032/*"GalleryAscendingOrder"*/, !isAscendingOrder, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CGThumbnailListViewManager__OnCloseFullScreenView(
        CGThumbnailListViewManager_o *this,
        CGThumbnailListViewManager_CallbackFunc_o *listItemCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackFunc = listItemCallback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)listItemCallback, (int32_t)method, v3);
}


void __fastcall CGThumbnailListViewManager__OnMoveEnd(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4B3FB2E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3FB2E = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1BDBAD4(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CGThumbnailListViewManager__RequestListObject(
        CGThumbnailListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x22
  int32_t scaleType; // w21
  System_Action_object__object__o *v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B3FB2D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_string__string__TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_CGThumbnailListViewManager_SetThumbnailAssetPath__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__Dispose__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_CGThumbnailObject__GetEnumerator__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_CGThumbnailObject__get_Count__, v10);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v11);
    byte_4B3FB2D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)CGThumbnailListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BDBAD4(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_CGThumbnailObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__MoveNext__) )
    {
      current = v21.fields._current;
      scaleType = this->fields.scaleType;
      v17 = (System_Action_object__object__o *)sub_1BDBAC4(System_Action_string__string__TypeInfo);
      System_Action_object__object____ctor(
        v17,
        (Il2CppObject *)this,
        Method_CGThumbnailListViewManager_SetThumbnailAssetPath__,
        0LL);
      if ( !current )
        sub_1BDBAD4(v18, v19);
      CGThumbnailObject__Init(
        (CGThumbnailObject_o *)current,
        mode,
        scaleType,
        (System_Action_string__string__o *)v17,
        v20);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CGThumbnailListViewManager__SetFilter(
        CGThumbnailListViewManager_o *this,
        bool isCg,
        bool isMovieFlag,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  this->fields.isCG = isCg;
  this->fields.isMovie = isMovieFlag;
  if ( !sort || (ListViewSort__SetFilter(sort, 100, isCg, 0LL), (sort = this->fields.sort) == 0LL) )
    sub_1BDBAD4(sort, isCg);
  ListViewSort__SetFilter(sort, 101, this->fields.isMovie, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CGThumbnailListViewManager__SetMode(
        CGThumbnailListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    CGThumbnailListViewManager__RequestListObject(this, mode, v5);
}


void __fastcall CGThumbnailListViewManager__SetObjectItem(
        CGThumbnailListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject_o *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 methodPtr_low; // x11
  int32_t initMode; // w23
  int32_t scaleType; // w21
  System_Action_object__object__o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  int32_t v15; // w1

  v4 = obj;
  if ( (byte_4B3FB2C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_string__string__TypeInfo, obj);
    sub_1BDB878(&Method_CGThumbnailListViewManager_SetThumbnailAssetPath__, v6);
    sub_1BDB878(&CGThumbnailObject_TypeInfo, v7);
    byte_4B3FB2C = 1;
  }
  if ( v4 )
  {
    methodPtr_low = LOBYTE(CGThumbnailObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v4->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (CGThumbnailObject_c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] != CGThumbnailObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  initMode = this->fields.initMode;
  scaleType = this->fields.scaleType;
  v11 = (System_Action_object__object__o *)sub_1BDBAC4(System_Action_string__string__TypeInfo);
  System_Action_object__object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_CGThumbnailListViewManager_SetThumbnailAssetPath__,
    0LL);
  if ( !v4 )
    sub_1BDBAD4(v12, v13);
  if ( initMode == 2 )
    v15 = 2;
  else
    v15 = 1;
  CGThumbnailObject__Init((CGThumbnailObject_o *)v4, v15, scaleType, (System_Action_string__string__o *)v11, v14);
}


void __fastcall CGThumbnailListViewManager__SetSortButtonImage(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8

  if ( (byte_4B3FB31 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17536/*"btn_sort_up"*/, v3);
    sub_1BDB878(&StringLiteral_17631/*"btn_txt_up"*/, v4);
    sub_1BDB878(&StringLiteral_17584/*"btn_txt_new"*/, v5);
    sub_1BDB878(&StringLiteral_17574/*"btn_txt_down"*/, v6);
    sub_1BDB878(&StringLiteral_17591/*"btn_txt_old"*/, v7);
    sub_1BDB878(&StringLiteral_17533/*"btn_sort_down"*/, v8);
    byte_4B3FB31 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_34;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17533/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17536/*"btn_sort_up"*/;
LABEL_30:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17631/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17536/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17533/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BDBAD4(sort, v10);
  }
}


void __fastcall CGThumbnailListViewManager__SetThumbnailAssetPath(
        CGThumbnailListViewManager_o *this,
        System_String_o *loadPath,
        System_String_o *unloadTargetPath,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_string__o *unloadTargetPathList; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_String_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_String_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x8
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8

  if ( (byte_4B3FB36 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, loadPath);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Contains__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v9);
    byte_4B3FB36 = 1;
  }
  if ( !System_String__IsNullOrEmpty(unloadTargetPath, 0LL) )
  {
    unloadTargetPathList = this->fields.unloadTargetPathList;
    if ( !unloadTargetPathList )
      goto LABEL_26;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)unloadTargetPathList,
            (Il2CppObject *)unloadTargetPath,
            (const MethodInfo_36D6154 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      unloadTargetPathList = this->fields.unloadTargetPathList;
      if ( !unloadTargetPathList )
        goto LABEL_26;
      items = unloadTargetPathList->fields._items;
      v15 = Method_System_Collections_Generic_List_string__Add__;
      ++unloadTargetPathList->fields._version;
      if ( !items )
        goto LABEL_26;
      size = unloadTargetPathList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)unloadTargetPathList,
          (Il2CppObject *)unloadTargetPath,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        unloadTargetPathList->fields._size = size + 1;
        v17[4] = (Il2CppClass *)unloadTargetPath;
        sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 4), (int32_t)unloadTargetPath, v12, v13);
      }
    }
  }
  unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_String__IsNullOrEmpty(loadPath, 0LL);
  if ( ((unsigned __int8)unloadTargetPathList & 1) != 0 )
    goto LABEL_23;
  unloadTargetPathList = this->fields.thumbnailPathList;
  if ( !unloadTargetPathList )
    goto LABEL_26;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)unloadTargetPathList,
          (Il2CppObject *)loadPath,
          (const MethodInfo_36D6154 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    unloadTargetPathList = this->fields.thumbnailPathList;
    if ( unloadTargetPathList )
    {
      v20 = unloadTargetPathList->fields._items;
      v21 = Method_System_Collections_Generic_List_string__Add__;
      ++unloadTargetPathList->fields._version;
      if ( v20 )
      {
        v22 = unloadTargetPathList->fields._size;
        if ( (unsigned int)v22 >= v20->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)unloadTargetPathList,
            (Il2CppObject *)loadPath,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &v20->obj.klass + v22;
          unloadTargetPathList->fields._size = v22 + 1;
          v23[4] = (Il2CppClass *)loadPath;
          sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)loadPath, v18, v19);
        }
        goto LABEL_19;
      }
    }
LABEL_26:
    sub_1BDBAD4(unloadTargetPathList, v10);
  }
LABEL_19:
  unloadTargetPathList = this->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
    goto LABEL_26;
  unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_Collections_Generic_List_object___Contains(
                                                                               (System_Collections_Generic_List_object__o *)unloadTargetPathList,
                                                                               (Il2CppObject *)loadPath,
                                                                               (const MethodInfo_36D6154 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)unloadTargetPathList & 1) != 0 )
  {
    unloadTargetPathList = this->fields.unloadTargetPathList;
    if ( !unloadTargetPathList )
      goto LABEL_26;
    unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_Collections_Generic_List_object___Remove(
                                                                                 (System_Collections_Generic_List_object__o *)unloadTargetPathList,
                                                                                 (Il2CppObject *)loadPath,
                                                                                 (const MethodInfo_36D72EC *)Method_System_Collections_Generic_List_string__Remove__);
  }
LABEL_23:
  thumbnailPathList = this->fields.thumbnailPathList;
  if ( !thumbnailPathList )
    goto LABEL_26;
  if ( thumbnailPathList->fields._size >= 101 )
    CGThumbnailListViewManager__UnloadTargetTextureAsset(this, v10);
}


void __fastcall CGThumbnailListViewManager__UnloadTargetTextureAsset(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  CGThumbnailListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8
  int v8; // w21
  int v9; // w26
  int size; // w8
  int m_CancellationTokenSource; // w9
  Il2CppObject *v12; // x20
  AssetData_o *AssetStorage; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v19; // x8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8

  v2 = this;
  if ( (byte_4B3FB37 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Remove__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    this = (CGThumbnailListViewManager_o *)sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    byte_4B3FB37 = 1;
  }
  thumbnailPathList = v2->fields.thumbnailPathList;
  if ( !thumbnailPathList )
LABEL_28:
    sub_1BDBAD4(this, method);
  v8 = 0;
  v9 = 100;
LABEL_5:
  size = thumbnailPathList->fields._size;
  while ( v9 < size )
  {
    this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
    if ( !this )
      goto LABEL_28;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    if ( v8 > m_CancellationTokenSource )
      break;
    if ( m_CancellationTokenSource >= 1 )
    {
      this = (CGThumbnailListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               0,
                                               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !v2->fields.thumbnailPathList )
        goto LABEL_28;
      v12 = (Il2CppObject *)this;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)v2->fields.thumbnailPathList,
        (Il2CppObject *)this,
        (const MethodInfo_36D72EC *)Method_System_Collections_Generic_List_string__Remove__);
      this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
      if ( !this )
        goto LABEL_28;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)this,
        v12,
        (const MethodInfo_36D72EC *)Method_System_Collections_Generic_List_string__Remove__);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage((System_String_o *)v12, 0LL);
      if ( AssetStorage )
      {
        this = (CGThumbnailListViewManager_o *)AssetData__RemoveEntryAll(AssetStorage, 0LL);
        thumbnailPathList = v2->fields.thumbnailPathList;
        ++v9;
        if ( !thumbnailPathList )
          goto LABEL_28;
      }
      else
      {
        this = (CGThumbnailListViewManager_o *)v2->fields.thumbnailPathList;
        if ( !this )
          goto LABEL_28;
        v16 = *(_QWORD *)&this->fields.m_CachedPtr;
        v17 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v16 )
          goto LABEL_28;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v16 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v12,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = v16 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v19 + 32) = v12;
          sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v12, v14, v15);
        }
        this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
        if ( !this )
          goto LABEL_28;
        v22 = *(_QWORD *)&this->fields.m_CachedPtr;
        v23 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v22 )
          goto LABEL_28;
        v24 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v12,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = v22 + 8 * v24;
          LODWORD(this->fields.m_CancellationTokenSource) = v24 + 1;
          *(_QWORD *)(v25 + 32) = v12;
          sub_1BDB81C((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v12, v20, v21);
        }
        thumbnailPathList = v2->fields.thumbnailPathList;
        ++v8;
        if ( !thumbnailPathList )
          goto LABEL_28;
      }
      goto LABEL_5;
    }
  }
}


void __fastcall CGThumbnailListViewManager__UnloadTextureAsset(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Object_array *Instance; // x0
  __int64 v6; // x1
  AssetManager_o *v7; // x20
  AssetManager_o *v8; // x20
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8
  int32_t size; // w2
  int v11; // w9
  struct System_Collections_Generic_List_string__o *unloadTargetPathList; // x8
  int32_t v13; // w2
  int v14; // w9

  if ( (byte_4B3FB35 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Clear__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__ToArray__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4);
    byte_4B3FB35 = 1;
  }
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !this->fields.thumbnailPathList )
    goto LABEL_14;
  v7 = (AssetManager_o *)Instance;
  Instance = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)this->fields.thumbnailPathList,
               (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_string__ToArray__);
  if ( !v7 )
    goto LABEL_14;
  AssetManager__CancelAndReleaseDownloadAssetStorages(v7, (System_String_array *)Instance, 0LL);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !this->fields.thumbnailPathList )
    goto LABEL_14;
  v8 = (AssetManager_o *)Instance;
  Instance = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)this->fields.thumbnailPathList,
               (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_string__ToArray__);
  if ( !v8 )
    goto LABEL_14;
  AssetManager__ReleaseAssetStorageAll(v8, (System_String_array *)Instance, 0LL);
  thumbnailPathList = this->fields.thumbnailPathList;
  if ( !thumbnailPathList )
    goto LABEL_14;
  size = thumbnailPathList->fields._size;
  v11 = thumbnailPathList->fields._version + 1;
  thumbnailPathList->fields._size = 0;
  thumbnailPathList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)thumbnailPathList->fields._items, 0, size, 0LL);
  unloadTargetPathList = this->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
LABEL_14:
    sub_1BDBAD4(Instance, v6);
  v13 = unloadTargetPathList->fields._size;
  v14 = unloadTargetPathList->fields._version + 1;
  unloadTargetPathList->fields._size = 0;
  unloadTargetPathList->fields._version = v14;
  if ( v13 >= 1 )
    System_Array__Clear((System_Array_o *)unloadTargetPathList->fields._items, 0, v13, 0LL);
}


void __fastcall CGThumbnailListViewManager__add_callbackFunc(
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

  if ( (byte_4B3FB28 & 1) == 0 )
  {
    sub_1BDB878(&CGThumbnailListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B3FB28 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CGThumbnailListViewManager_CallbackFunc_c *)v7->klass != CGThumbnailListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CGThumbnailListViewManager_o *)sub_1BDBD94(v7);
  CGThumbnailListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_int__o *__fastcall CGThumbnailListViewManager__get_GalleryIdList(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CGThumbnailListViewManager___c_c *v10; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  System_Converter_TInput__TOutput__o *_9__14_0; // x20
  Il2CppObject *v13; // x21
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_TOutput__o *v17; // x0
  CGThumbnailListViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__int__o *_9__14_1; // x20
  Il2CppObject *v21; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4B3FB26 & 1) == 0 )
  {
    sub_1BDB878(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___, v3);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1BDB878(&System_Func_CGThumbnailListItem__int__TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___, v6);
    sub_1BDB878(&Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_0__, v7);
    sub_1BDB878(&Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_1__, v8);
    sub_1BDB878(&CGThumbnailListViewManager___c_TypeInfo, v9);
    byte_4B3FB26 = 1;
  }
  v10 = CGThumbnailListViewManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v10 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__14_0 = (System_Converter_TInput__TOutput__o *)v10->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__14_0 = (System_Converter_TInput__TOutput__o *)sub_1BDBAC4(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    System_Converter_object__object____ctor(
      _9__14_0,
      v13,
      Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_0__,
      0LL);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)_9__14_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v15, v16);
  }
  if ( !itemList )
    sub_1BDBAD4(v10, method);
  v17 = System_Collections_Generic_List_object___ConvertAll_object_(
          (System_Collections_Generic_List_object__o *)itemList,
          (System_Converter_T__TOutput__o *)_9__14_0,
          (const MethodInfo_2F62ED4 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
  v18 = CGThumbnailListViewManager___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v18 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__14_1 = (System_Func_object__int__o *)v18->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__14_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_CGThumbnailListItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_1,
      v21,
      Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_1__,
      0LL);
    v22 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v22->__9__14_1 = (struct System_Func_CGThumbnailListItem__int__o *)_9__14_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v22->__9__14_1, (int32_t)_9__14_1, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__14_1,
                                                               (const MethodInfo_3067BA8 *)Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v25,
                                                     (const MethodInfo_3074DD0 *)Method_System_Linq_Enumerable_ToList_int___);
}


System_Collections_Generic_List_CGThumbnailObject__o *__fastcall CGThumbnailListViewManager__get_ObjectList(
        CGThumbnailListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B3FB2A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_CGThumbnailObject___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_CGThumbnailObject__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_CGThumbnailObject___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_CGThumbnailObject__TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B3FB2A = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_CGThumbnailObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_CGThumbnailObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BDBAD4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BDBAD4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_CGThumbnailObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BDBAD4(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_CGThumbnailObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BDBAD4(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CGThumbnailObject__o *)v11;
}


System_Collections_Generic_List_int__o *__fastcall CGThumbnailListViewManager__get_SortGalleryIdList(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CGThumbnailListViewManager___c_c *v10; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x19
  System_Converter_TInput__TOutput__o *_9__16_0; // x20
  Il2CppObject *v13; // x21
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_TOutput__o *v17; // x0
  CGThumbnailListViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__int__o *_9__16_1; // x20
  Il2CppObject *v21; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4B3FB27 & 1) == 0 )
  {
    sub_1BDB878(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___, v3);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1BDB878(&System_Func_CGThumbnailListItem__int__TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___, v6);
    sub_1BDB878(&Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_0__, v7);
    sub_1BDB878(&Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_1__, v8);
    sub_1BDB878(&CGThumbnailListViewManager___c_TypeInfo, v9);
    byte_4B3FB27 = 1;
  }
  v10 = CGThumbnailListViewManager___c_TypeInfo;
  itemSortList = this->fields.itemSortList;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v10 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__16_0 = (System_Converter_TInput__TOutput__o *)v10->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__16_0 = (System_Converter_TInput__TOutput__o *)sub_1BDBAC4(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    System_Converter_object__object____ctor(
      _9__16_0,
      v13,
      Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_0__,
      0LL);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)_9__16_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v15, v16);
  }
  if ( !itemSortList )
    sub_1BDBAD4(v10, method);
  v17 = System_Collections_Generic_List_object___ConvertAll_object_(
          (System_Collections_Generic_List_object__o *)itemSortList,
          (System_Converter_T__TOutput__o *)_9__16_0,
          (const MethodInfo_2F62ED4 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
  v18 = CGThumbnailListViewManager___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v18 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__int__o *)v18->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_CGThumbnailListItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__16_1,
      v21,
      Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_1__,
      0LL);
    v22 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v22->__9__16_1 = (struct System_Func_CGThumbnailListItem__int__o *)_9__16_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v22->__9__16_1, (int32_t)_9__16_1, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_3067BA8 *)Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v25,
                                                     (const MethodInfo_3074DD0 *)Method_System_Linq_Enumerable_ToList_int___);
}


void __fastcall CGThumbnailListViewManager__remove_callbackFunc(
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

  if ( (byte_4B3FB29 & 1) == 0 )
  {
    sub_1BDB878(&CGThumbnailListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B3FB29 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CGThumbnailListViewManager_CallbackFunc_c *)v7->klass != CGThumbnailListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CGThumbnailListViewManager_o *)sub_1BDBD94(v7);
  CGThumbnailListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CGThumbnailListViewManager_CallbackFunc___ctor(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A1DA98;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1DA50;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CGThumbnailListViewManager_CallbackFunc__BeginInvoke(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        int32_t thumbnailIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = thumbnailIndex;
  if ( (byte_4B3FB38 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&thumbnailIndex);
    byte_4B3FB38 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall CGThumbnailListViewManager_CallbackFunc__EndInvoke(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall CGThumbnailListViewManager_CallbackFunc__Invoke(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        int32_t thumbnailIndex,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    thumbnailIndex,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CGThumbnailListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B3FB39 & 1) == 0 )
  {
    sub_1BDB878(&CGThumbnailListViewManager___c_TypeInfo, v1);
    byte_4B3FB39 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(CGThumbnailListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CGThumbnailListViewManager___c_TypeInfo->static_fields->__9 = (struct CGThumbnailListViewManager___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)CGThumbnailListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall CGThumbnailListViewManager___c___ctor(CGThumbnailListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CGThumbnailListViewManager___c___CreateList_b__26_0(
        CGThumbnailListViewManager___c_o *this,
        GalleryEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.priority;
}


CGThumbnailListItem_o *__fastcall CGThumbnailListViewManager___c___JumpItemForID_b__37_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B3FB3C & 1) == 0 )
  {
    sub_1BDB878(&CGThumbnailListItem_TypeInfo, x);
    byte_4B3FB3C = 1;
  }
  if ( !x )
    return 0LL;
  methodPtr_low = LOBYTE(CGThumbnailListItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(x->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CGThumbnailListItem_c *)x->klass->_2.typeHierarchy[methodPtr_low - 1] == CGThumbnailListItem_TypeInfo )
    return (CGThumbnailListItem_o *)x;
  return 0LL;
}


CGThumbnailListItem_o *__fastcall CGThumbnailListViewManager___c___get_GalleryIdList_b__14_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B3FB3A & 1) == 0 )
  {
    sub_1BDB878(&CGThumbnailListItem_TypeInfo, x);
    byte_4B3FB3A = 1;
  }
  if ( !x )
    return 0LL;
  methodPtr_low = LOBYTE(CGThumbnailListItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(x->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CGThumbnailListItem_c *)x->klass->_2.typeHierarchy[methodPtr_low - 1] == CGThumbnailListItem_TypeInfo )
    return (CGThumbnailListItem_o *)x;
  return 0LL;
}


int32_t __fastcall CGThumbnailListViewManager___c___get_GalleryIdList_b__14_1(
        CGThumbnailListViewManager___c_o *this,
        CGThumbnailListItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._Id_k__BackingField;
}


CGThumbnailListItem_o *__fastcall CGThumbnailListViewManager___c___get_SortGalleryIdList_b__16_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B3FB3B & 1) == 0 )
  {
    sub_1BDB878(&CGThumbnailListItem_TypeInfo, x);
    byte_4B3FB3B = 1;
  }
  if ( !x )
    return 0LL;
  methodPtr_low = LOBYTE(CGThumbnailListItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(x->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CGThumbnailListItem_c *)x->klass->_2.typeHierarchy[methodPtr_low - 1] == CGThumbnailListItem_TypeInfo )
    return (CGThumbnailListItem_o *)x;
  return 0LL;
}


int32_t __fastcall CGThumbnailListViewManager___c___get_SortGalleryIdList_b__16_1(
        CGThumbnailListViewManager___c_o *this,
        CGThumbnailListItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._Id_k__BackingField;
}


void __fastcall CGThumbnailListViewManager___c__DisplayClass26_0___ctor(
        CGThumbnailListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CGThumbnailListViewManager___c__DisplayClass26_0___CreateList_b__1(
        CGThumbnailListViewManager___c__DisplayClass26_0_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  CGThumbnailListViewManager___c__DisplayClass26_0_o *v4; // x20
  int32_t galleryId; // w19

  v4 = this;
  if ( (byte_4B3FB3D & 1) == 0 )
  {
    this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)sub_1BDB878(
                                                                   &Method_System_Collections_Generic_List_GalleryEntity__get_Item__,
                                                                   x);
    byte_4B3FB3D = 1;
  }
  if ( !x
    || (this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)v4->fields.thumbnailEntityList) == 0LL
    || (galleryId = x->fields.galleryId,
        (this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                        (System_Collections_Generic_List_object__o *)this,
                                                                        v4->fields.i,
                                                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GalleryEntity__get_Item__)) == 0LL) )
  {
    sub_1BDBAD4(this, x);
  }
  return galleryId == LODWORD(this->fields.thumbnailEntityList);
}


void __fastcall CGThumbnailListViewManager___c__DisplayClass37_0___ctor(
        CGThumbnailListViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CGThumbnailListViewManager___c__DisplayClass37_0___JumpItemForID_b__1(
        CGThumbnailListViewManager___c__DisplayClass37_0_o *this,
        CGThumbnailListItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._Id_k__BackingField == this->fields.galleryId;
}
void __fastcall CGThumbnailListViewManager___ctor(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isCG = 257;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CGThumbnailListViewManager__ChangeIconScale(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  CGThumbnailListViewManager_o *v2; // x19
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CGThumbnailListViewManager_o *v5; // x0
  int v6; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  struct ListViewSort_o *sort; // x8
  int32_t v9; // w1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_49B6052 & 1) == 0 )
  {
    this = (CGThumbnailListViewManager_o *)sub_1B4CF90(&StringLiteral_6881/*"GalleryListItemScale"*/, method);
    byte_49B6052 = 1;
  }
  scaleType = v2->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = v2->fields.smallSizeSeed;
    v5 = v2;
    v6 = 2;
    goto LABEL_9;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = v2->fields.extremelySmallSizeSeed;
    v5 = v2;
    v6 = 3;
    goto LABEL_9;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = v2->fields.normalSizeSeed;
    v5 = v2;
    v6 = 1;
LABEL_9:
    v5->fields.seed = smallSizeSeed;
    p_seed = &v5->fields.seed;
    *((_DWORD *)p_seed + 66) = v6;
    this = (CGThumbnailListViewManager_o *)sub_1B4CF34(p_seed);
  }
  sort = v2->fields.sort;
  if ( !sort )
    goto LABEL_14;
  v9 = v2->fields.scaleType;
  sort->fields.iconScaleKind = v9;
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6881/*"GalleryListItemScale"*/, v9, 0LL);
  CGThumbnailListViewManager__ModifyList(v2, 1, v10);
  CGThumbnailListViewManager__SetMode(v2, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)v2, -1, 0, -1, 0LL);
  this = (CGThumbnailListViewManager_o *)v2->fields.scrollBar;
  if ( !this
    || (this = (CGThumbnailListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL )
  {
LABEL_14:
    sub_1B4D1EC(this, method);
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
  struct ListViewSort_o *sort; // x24
  __int64 Int; // x0
  __int64 v44; // x1
  UILabel_o *emptyMessageLabel; // x24
  struct ListViewSort_o *v46; // x19
  CGThumbnailListViewManager___c_c *v47; // x0
  System_Func_object__int__o *_9__26_0; // x22
  Il2CppObject *v49; // x19
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  CGThumbnailListViewManager_o *v52; // x21
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8
  System_Collections_Generic_List_object__o *v54; // x21
  System_Collections_Generic_List_object__o *v55; // x19
  int32_t size; // w2
  int v57; // w9
  struct System_Collections_Generic_List_string__o *unloadTargetPathList; // x8
  int32_t v59; // w2
  int v60; // w9
  System_Func_object__bool__o **v61; // x23
  Il2CppObject *Item; // x0
  System_Func_object__bool__o *v63; // x25
  Il2CppObject *v64; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Collections_Generic_List_object__o *v66; // x25
  int32_t v67; // w27
  __int64 v68; // x26
  int32_t v69; // w19
  int32_t v70; // w28
  int64_t v71; // x29
  System_String_o *v72; // x1
  int v73; // w27
  Il2CppClass *klass; // d8
  int v75; // w26
  int v76; // w25
  System_String_o *v77; // x19
  __int64 v78; // x24
  __int64 v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  __int64 v82; // x8
  struct ListViewSort_o *v83; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *scrollBar; // x19
  struct UIScrollBar_o *v87; // x8
  struct ListViewSort_o *v88; // x8
  int32_t v89; // w1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UserGameEntity_o *SelfUserGame; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-68h]

  if ( (byte_49B604D & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_GetValue_string___, thumbnailList);
    sub_1B4CF90(&CGThumbnailListItem_TypeInfo, v10);
    sub_1B4CF90(&CondType_TypeInfo, v11);
    sub_1B4CF90(&Method_DataManager_GetMaster_GalleryResourceMaster___, v12);
    sub_1B4CF90(&DataManager_TypeInfo, v13);
    sub_1B4CF90(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__getEntityList__, v14);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderBy_GalleryEntity__int___, v15);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_GalleryEntity___, v16);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___, v17);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___, v18);
    sub_1B4CF90(&System_Func_GalleryResourceEntity__bool__TypeInfo, v19);
    sub_1B4CF90(&System_Func_GalleryEntity__int__TypeInfo, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__Add__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Clear__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GalleryEntity__get_Count__, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__, v25);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v26);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GalleryEntity__get_Item__, v27);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__, v28);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v29);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v30);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v31);
    sub_1B4CF90(&Method_CGThumbnailListViewManager___c__CreateList_b__26_0__, v32);
    sub_1B4CF90(&Method_CGThumbnailListViewManager___c__DisplayClass26_0__CreateList_b__1__, v33);
    sub_1B4CF90(&CGThumbnailListViewManager___c__DisplayClass26_0_TypeInfo, v34);
    sub_1B4CF90(&CGThumbnailListViewManager___c_TypeInfo, v35);
    sub_1B4CF90(&StringLiteral_6881/*"GalleryListItemScale"*/, v36);
    sub_1B4CF90(&StringLiteral_6802/*"GALLERY_NO_THUMBNAIL"*/, v37);
    sub_1B4CF90(&StringLiteral_9023/*"MyRoom/Gallery/Thumbnail/"*/, v38);
    sub_1B4CF90(&StringLiteral_6879/*"GalleryAscendingOrder"*/, v39);
    sub_1B4CF90(&StringLiteral_20978/*"maleThumbnailName"*/, v40);
    byte_49B604D = 1;
  }
  v41 = sub_1B4D1DC(CGThumbnailListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.callbackFunc = listItemCallback;
  sub_1B4CF34(&this->fields.callbackFunc);
  sort = this->fields.sort;
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6879/*"GalleryAscendingOrder"*/, 1, 0LL);
  if ( !sort )
    goto LABEL_77;
  sort->fields.isAscendingOrder = (_DWORD)Int == 1;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Int = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6802/*"GALLERY_NO_THUMBNAIL"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_77;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Int, 0LL);
  Int = (__int64)this->fields.sort;
  this->fields.isCG = isCgFlag;
  this->fields.isMovie = isMovieFlag;
  if ( !Int )
    goto LABEL_77;
  ListViewSort__SetFilter((ListViewSort_o *)Int, 100, isCgFlag, 0LL);
  Int = (__int64)this->fields.sort;
  if ( !Int )
    goto LABEL_77;
  ListViewSort__SetFilter((ListViewSort_o *)Int, 101, this->fields.isMovie, 0LL);
  v46 = this->fields.sort;
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6881/*"GalleryListItemScale"*/, 1, 0LL);
  if ( !v46 )
    goto LABEL_77;
  v46->fields.iconScaleKind = Int;
  v47 = CGThumbnailListViewManager___c_TypeInfo;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v47 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__26_0 = (System_Func_object__int__o *)v47->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v47->static_fields->__9;
    _9__26_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_GalleryEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__26_0, v49, Method_CGThumbnailListViewManager___c__CreateList_b__26_0__, 0LL);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Func_GalleryEntity__int__o *)_9__26_0;
    sub_1B4CF34(&static_fields->__9__26_0);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)thumbnailList,
                                                               (System_Func_TSource__TKey__o *)_9__26_0,
                                                               (const MethodInfo_2F2DB00 *)Method_System_Linq_Enumerable_OrderBy_GalleryEntity__int___);
  Int = (__int64)System_Linq_Enumerable__ToList_object_(
                   v51,
                   (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_GalleryEntity___);
  if ( !v41 )
    goto LABEL_77;
  *(_QWORD *)(v41 + 16) = Int;
  Int = sub_1B4CF34(v41 + 16);
  v52 = this;
  thumbnailPathList = this->fields.thumbnailPathList;
  if ( !thumbnailPathList )
  {
    v54 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v54,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.thumbnailPathList = (struct System_Collections_Generic_List_string__o *)v54;
    sub_1B4CF34(&this->fields.thumbnailPathList);
    v52 = this;
    v55 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)v55;
    Int = sub_1B4CF34(&this->fields.unloadTargetPathList);
    thumbnailPathList = this->fields.thumbnailPathList;
    if ( !thumbnailPathList )
      goto LABEL_77;
  }
  size = thumbnailPathList->fields._size;
  v57 = thumbnailPathList->fields._version + 1;
  thumbnailPathList->fields._size = 0;
  thumbnailPathList->fields._version = v57;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)thumbnailPathList->fields._items, 0, size, 0LL);
  unloadTargetPathList = v52->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
    goto LABEL_77;
  v59 = unloadTargetPathList->fields._size;
  v60 = unloadTargetPathList->fields._version + 1;
  unloadTargetPathList->fields._size = 0;
  unloadTargetPathList->fields._version = v60;
  if ( v59 >= 1 )
    System_Array__Clear((System_Array_o *)unloadTargetPathList->fields._items, 0, v59, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Int = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  if ( !Int )
    goto LABEL_77;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  *(System_Collections_Generic_IEnumerable_TSource__o **)(Int + 40),
                                                                  (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
  Int = *(_QWORD *)(v41 + 16);
  *(_DWORD *)(v41 + 24) = 0;
  if ( !Int )
    goto LABEL_77;
  v44 = 0LL;
  v61 = (System_Func_object__bool__o **)(v41 + 32);
  while ( (int)v44 < *(_DWORD *)(Int + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Int,
             v44,
             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GalleryEntity__get_Item__);
    v63 = *v61;
    v64 = Item;
    if ( !*v61 )
    {
      v63 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_GalleryResourceEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v63,
        (Il2CppObject *)v41,
        Method_CGThumbnailListViewManager___c__DisplayClass26_0__CreateList_b__1__,
        0LL);
      *(_QWORD *)(v41 + 32) = v63;
      sub_1B4CF34(v41 + 32);
    }
    v65 = System_Linq_Enumerable__Where_object_(
            source,
            (System_Func_TSource__bool__o *)v63,
            (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    Int = (__int64)System_Linq_Enumerable__ToList_object_(
                     v65,
                     (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Int )
      goto LABEL_77;
    v66 = (System_Collections_Generic_List_object__o *)Int;
    if ( *(int *)(Int + 24) >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        Int = (__int64)System_Collections_Generic_List_object___get_Item(
                         v66,
                         v67,
                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
        if ( !Int )
          goto LABEL_77;
        v68 = Int;
        v69 = *(_DWORD *)(Int + 52);
        v70 = *(_DWORD *)(Int + 56);
        v71 = *(int *)(Int + 60);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(v69, v70, v71, 0, 0LL, 0LL) )
          break;
        if ( ++v67 >= v66->fields._size )
          goto LABEL_51;
      }
      Int = (__int64)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_77;
      Int = UserGameEntity__IsMale(SelfUserGame, 0LL);
      if ( !v64 )
        goto LABEL_77;
      v72 = (Int & 1) != 0
          ? (System_String_o *)BasicHelper__GetValue_object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)v64[2].monitor,
                                 (System_String_o *)StringLiteral_20978/*"maleThumbnailName"*/,
                                 (Il2CppObject *)v64[2].klass,
                                 (const MethodInfo_2EEF7D0 *)Method_BasicHelper_GetValue_string___)
          : (System_String_o *)v64[2].klass;
      v73 = *(_DWORD *)(v41 + 24);
      klass = v64[1].klass;
      v75 = *(_DWORD *)(v68 + 24);
      v76 = v66->fields._size;
      v77 = System_String__Concat_61093468((System_String_o *)StringLiteral_9023/*"MyRoom/Gallery/Thumbnail/"*/, v72, 0LL);
      v78 = sub_1B4D1DC(CGThumbnailListItem_TypeInfo);
      ListViewItem___ctor((ListViewItem_o *)v78, 0LL);
      *(_DWORD *)(v78 + 20) = v73;
      *(_QWORD *)(v78 + 112) = klass;
      *(_DWORD *)(v78 + 120) = v75;
      *(_BYTE *)(v78 + 124) = v76 > 1;
      *(_BYTE *)(v78 + 125) = 1;
      *(_QWORD *)(v78 + 128) = v77;
      sub_1B4CF34(v78 + 128);
      Int = (__int64)this->fields.itemList;
      if ( !Int )
        goto LABEL_77;
      v79 = *(_QWORD *)(Int + 16);
      v80 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Int + 28);
      if ( !v79 )
        goto LABEL_77;
      v81 = *(int *)(Int + 24);
      if ( (unsigned int)v81 >= *(_DWORD *)(v79 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Int,
          (Il2CppObject *)v78,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v82 = v79 + 8 * v81;
        *(_DWORD *)(Int + 24) = v81 + 1;
        *(_QWORD *)(v82 + 32) = v78;
        sub_1B4CF34(v82 + 32);
      }
    }
LABEL_51:
    Int = *(_QWORD *)(v41 + 16);
    v44 = (unsigned int)(*(_DWORD *)(v41 + 24) + 1);
    *(_DWORD *)(v41 + 24) = v44;
    if ( !Int )
      goto LABEL_77;
  }
  v83 = this->fields.sort;
  if ( !v83 )
    goto LABEL_77;
  iconScaleKind = v83->fields.iconScaleKind;
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
  sub_1B4CF34(&this->fields.seed);
LABEL_61:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    Int = (__int64)this->fields.scrollBar;
    if ( Int )
    {
      Int = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0LL);
      if ( Int )
      {
        Int = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Int, 0LL);
        if ( (Int & 1) == 0 )
          return;
        v87 = this->fields.scrollBar;
        if ( v87 )
        {
          if ( v87->fields.mSize > 0.98 )
            return;
          v88 = this->fields.sort;
          if ( v88 )
          {
            if ( v88->fields.isAscendingOrder )
            {
              v89 = 0;
            }
            else
            {
              itemSortList = this->fields.itemSortList;
              if ( !itemSortList )
                goto LABEL_77;
              v89 = itemSortList->fields._size - 1;
            }
            ListViewManager__JumpItem((ListViewManager_o *)this, v89, 0LL);
            Int = (__int64)this->fields.scrollBar;
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
    sub_1B4D1EC(Int, v44);
  }
}


System_String_o *__fastcall CGThumbnailListViewManager__GetScaleButtonSpriteName(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1B4D1EC(0LL, method);
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

  if ( (byte_49B6055 & 1) == 0 )
  {
    sub_1B4CF90(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo, *(_QWORD *)&galleryId);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_CGThumbnailListItem___, v5);
    sub_1B4CF90(&System_Func_CGThumbnailListItem__bool__TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___, v7);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    sub_1B4CF90(&Method_CGThumbnailListViewManager___c__JumpItemForID_b__37_0__, v9);
    sub_1B4CF90(&Method_CGThumbnailListViewManager___c__DisplayClass37_0__JumpItemForID_b__1__, v10);
    sub_1B4CF90(&CGThumbnailListViewManager___c__DisplayClass37_0_TypeInfo, v11);
    sub_1B4CF90(&CGThumbnailListViewManager___c_TypeInfo, v12);
    byte_49B6055 = 1;
  }
  v13 = sub_1B4D1DC(CGThumbnailListViewManager___c__DisplayClass37_0_TypeInfo);
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
            v19 = (System_Converter_TInput__TOutput__o *)sub_1B4D1DC(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
            System_Converter_object__object____ctor(
              v19,
              v20,
              Method_CGThumbnailListViewManager___c__JumpItemForID_b__37_0__,
              0LL);
            static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__37_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)v19;
            sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__37_0, (int32_t)v19, v22, v23);
          }
          if ( itemList )
          {
            v24 = System_Collections_Generic_List_object___ConvertAll_object_(
                    (System_Collections_Generic_List_object__o *)itemList,
                    (System_Converter_T__TOutput__o *)v19,
                    (const MethodInfo_2E391E8 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
            v25 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_CGThumbnailListItem__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v25,
              (Il2CppObject *)v13,
              Method_CGThumbnailListViewManager___c__DisplayClass37_0__JumpItemForID_b__1__,
              0LL);
            v26 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                    (System_Func_TSource__bool__o *)v25,
                    (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_CGThumbnailListItem___);
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
    sub_1B4D1EC(gameObject, v15);
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

  if ( (byte_49B6051 & 1) == 0 )
  {
    sub_1B4CF90(&CGThumbnailListItem_TypeInfo, isIconSizeChange);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    byte_49B6051 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1B4D1EC(itemList, isIconSizeChange);
  size = itemList->fields._size;
  if ( size >= 1 && isIconSizeChange )
  {
    v10 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v10,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_49B6056 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CGThumbnailListViewManager_OnClickListView__, obj);
    byte_49B6056 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    v7 = Method_CGThumbnailListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_CGThumbnailListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B4CFA8(Method_CGThumbnailListViewManager_OnClickListView__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B4D1EC(v9, v10);
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

  if ( (byte_49B6054 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__, method);
    sub_1B4CF90(&StringLiteral_6879/*"GalleryAscendingOrder"*/, v3);
    byte_49B6054 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B4CFA8(Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B4D1EC(v6, v7);
    isAscendingOrder = sort->fields.isAscendingOrder;
    sort->fields.isAscendingOrder = !isAscendingOrder;
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6879/*"GalleryAscendingOrder"*/, !isAscendingOrder, 0LL);
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)listItemCallback, (int32_t)method, v3);
}


void __fastcall CGThumbnailListViewManager__OnMoveEnd(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_49B6050 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B6050 = 1;
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
          sub_1B4D1EC(0LL, v7);
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

  if ( (byte_49B604F & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__string__TypeInfo, *(_QWORD *)&mode);
    sub_1B4CF90(&Method_CGThumbnailListViewManager_SetThumbnailAssetPath__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__Dispose__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__MoveNext__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__get_Current__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CGThumbnailObject__GetEnumerator__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CGThumbnailObject__get_Count__, v10);
    sub_1B4CF90(&StringLiteral_9737/*"OnMoveEnd"*/, v11);
    byte_49B604F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)CGThumbnailListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B4D1EC(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9737/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_CGThumbnailObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__MoveNext__) )
    {
      current = v21.fields._current;
      scaleType = this->fields.scaleType;
      v17 = (System_Action_object__object__o *)sub_1B4D1DC(System_Action_string__string__TypeInfo);
      System_Action_object__object____ctor(
        v17,
        (Il2CppObject *)this,
        Method_CGThumbnailListViewManager_SetThumbnailAssetPath__,
        0LL);
      if ( !current )
        sub_1B4D1EC(v18, v19);
      CGThumbnailObject__Init(
        (CGThumbnailObject_o *)current,
        mode,
        scaleType,
        (System_Action_string__string__o *)v17,
        v20);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__Dispose__);
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
    sub_1B4D1EC(sort, isCg);
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
  if ( (byte_49B604E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__string__TypeInfo, obj);
    sub_1B4CF90(&Method_CGThumbnailListViewManager_SetThumbnailAssetPath__, v6);
    sub_1B4CF90(&CGThumbnailObject_TypeInfo, v7);
    byte_49B604E = 1;
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
  v11 = (System_Action_object__object__o *)sub_1B4D1DC(System_Action_string__string__TypeInfo);
  System_Action_object__object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_CGThumbnailListViewManager_SetThumbnailAssetPath__,
    0LL);
  if ( !v4 )
    sub_1B4D1EC(v12, v13);
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

  if ( (byte_49B6053 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_17227/*"btn_sort_up"*/, v3);
    sub_1B4CF90(&StringLiteral_17318/*"btn_txt_up"*/, v4);
    sub_1B4CF90(&StringLiteral_17271/*"btn_txt_new"*/, v5);
    sub_1B4CF90(&StringLiteral_17261/*"btn_txt_down"*/, v6);
    sub_1B4CF90(&StringLiteral_17278/*"btn_txt_old"*/, v7);
    sub_1B4CF90(&StringLiteral_17224/*"btn_sort_down"*/, v8);
    byte_49B6053 = 1;
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
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17278/*"btn_txt_old"*/ : &StringLiteral_17271/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17224/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17227/*"btn_sort_up"*/;
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17318/*"btn_txt_up"*/ : &StringLiteral_17261/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17227/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17224/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1B4D1EC(sort, v10);
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

  if ( (byte_49B6058 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, loadPath);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Contains__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Count__, v9);
    byte_49B6058 = 1;
  }
  if ( !System_String__IsNullOrEmpty(unloadTargetPath, 0LL) )
  {
    unloadTargetPathList = this->fields.unloadTargetPathList;
    if ( !unloadTargetPathList )
      goto LABEL_26;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)unloadTargetPathList,
            (Il2CppObject *)unloadTargetPath,
            (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__) )
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
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        unloadTargetPathList->fields._size = size + 1;
        v17[4] = (Il2CppClass *)unloadTargetPath;
        sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 4), (int32_t)unloadTargetPath, v12, v13);
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
          (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__) )
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
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &v20->obj.klass + v22;
          unloadTargetPathList->fields._size = v22 + 1;
          v23[4] = (Il2CppClass *)loadPath;
          sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 4), (int32_t)loadPath, v18, v19);
        }
        goto LABEL_19;
      }
    }
LABEL_26:
    sub_1B4D1EC(unloadTargetPathList, v10);
  }
LABEL_19:
  unloadTargetPathList = this->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
    goto LABEL_26;
  unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_Collections_Generic_List_object___Contains(
                                                                               (System_Collections_Generic_List_object__o *)unloadTargetPathList,
                                                                               (Il2CppObject *)loadPath,
                                                                               (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)unloadTargetPathList & 1) != 0 )
  {
    unloadTargetPathList = this->fields.unloadTargetPathList;
    if ( !unloadTargetPathList )
      goto LABEL_26;
    unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_Collections_Generic_List_object___Remove(
                                                                                 (System_Collections_Generic_List_object__o *)unloadTargetPathList,
                                                                                 (Il2CppObject *)loadPath,
                                                                                 (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_string__Remove__);
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
  if ( (byte_49B6059 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Remove__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    this = (CGThumbnailListViewManager_o *)sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    byte_49B6059 = 1;
  }
  thumbnailPathList = v2->fields.thumbnailPathList;
  if ( !thumbnailPathList )
LABEL_28:
    sub_1B4D1EC(this, method);
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
                                               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !v2->fields.thumbnailPathList )
        goto LABEL_28;
      v12 = (Il2CppObject *)this;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)v2->fields.thumbnailPathList,
        (Il2CppObject *)this,
        (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_string__Remove__);
      this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
      if ( !this )
        goto LABEL_28;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)this,
        v12,
        (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_string__Remove__);
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
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = v16 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v19 + 32) = v12;
          sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v12, v14, v15);
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
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = v22 + 8 * v24;
          LODWORD(this->fields.m_CancellationTokenSource) = v24 + 1;
          *(_QWORD *)(v25 + 32) = v12;
          sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v12, v20, v21);
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

  if ( (byte_49B6057 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Clear__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__ToArray__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4);
    byte_49B6057 = 1;
  }
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !this->fields.thumbnailPathList )
    goto LABEL_14;
  v7 = (AssetManager_o *)Instance;
  Instance = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)this->fields.thumbnailPathList,
               (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_string__ToArray__);
  if ( !v7 )
    goto LABEL_14;
  AssetManager__CancelAndReleaseDownloadAssetStorages(v7, (System_String_array *)Instance, 0LL);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !this->fields.thumbnailPathList )
    goto LABEL_14;
  v8 = (AssetManager_o *)Instance;
  Instance = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)this->fields.thumbnailPathList,
               (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_string__ToArray__);
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
    sub_1B4D1EC(Instance, v6);
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

  if ( (byte_49B604A & 1) == 0 )
  {
    sub_1B4CF90(&CGThumbnailListViewManager_CallbackFunc_TypeInfo, value);
    byte_49B604A = 1;
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
    v8 = sub_1B8724C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CGThumbnailListViewManager_o *)sub_1B4D4AC(v7);
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
  System_Collections_Generic_List_TOutput__o *v15; // x0
  CGThumbnailListViewManager___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__int__o *_9__14_1; // x20
  Il2CppObject *v19; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_49B6048 & 1) == 0 )
  {
    sub_1B4CF90(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1B4CF90(&System_Func_CGThumbnailListItem__int__TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___, v6);
    sub_1B4CF90(&Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_0__, v7);
    sub_1B4CF90(&Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_1__, v8);
    sub_1B4CF90(&CGThumbnailListViewManager___c_TypeInfo, v9);
    byte_49B6048 = 1;
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
    _9__14_0 = (System_Converter_TInput__TOutput__o *)sub_1B4D1DC(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    System_Converter_object__object____ctor(
      _9__14_0,
      v13,
      Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_0__,
      0LL);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)_9__14_0;
    v10 = (CGThumbnailListViewManager___c_c *)sub_1B4CF34(&static_fields->__9__14_0);
  }
  if ( !itemList )
    sub_1B4D1EC(v10, method);
  v15 = System_Collections_Generic_List_object___ConvertAll_object_(
          (System_Collections_Generic_List_object__o *)itemList,
          (System_Converter_T__TOutput__o *)_9__14_0,
          (const MethodInfo_2E391E8 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
  v16 = CGThumbnailListViewManager___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v16 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__14_1 = (System_Func_object__int__o *)v16->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__14_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_CGThumbnailListItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_1,
      v19,
      Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_1__,
      0LL);
    v20 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v20->__9__14_1 = (struct System_Func_CGThumbnailListItem__int__o *)_9__14_1;
    sub_1B4CF34(&v20->__9__14_1);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__14_1,
                                                               (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v21,
                                                     (const MethodInfo_2F3FF5C *)Method_System_Linq_Enumerable_ToList_int___);
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

  if ( (byte_49B604C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_CGThumbnailObject___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CGThumbnailObject__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CGThumbnailObject___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_CGThumbnailObject__TypeInfo, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    byte_49B604C = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_CGThumbnailObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_CGThumbnailObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B4D1EC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B4D1EC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_CGThumbnailObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B4D1EC(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_CGThumbnailObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B4D1EC(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_TOutput__o *v15; // x0
  CGThumbnailListViewManager___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__int__o *_9__16_1; // x20
  Il2CppObject *v19; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_49B6049 & 1) == 0 )
  {
    sub_1B4CF90(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1B4CF90(&System_Func_CGThumbnailListItem__int__TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___, v6);
    sub_1B4CF90(&Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_0__, v7);
    sub_1B4CF90(&Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_1__, v8);
    sub_1B4CF90(&CGThumbnailListViewManager___c_TypeInfo, v9);
    byte_49B6049 = 1;
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
    _9__16_0 = (System_Converter_TInput__TOutput__o *)sub_1B4D1DC(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    System_Converter_object__object____ctor(
      _9__16_0,
      v13,
      Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_0__,
      0LL);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)_9__16_0;
    v10 = (CGThumbnailListViewManager___c_c *)sub_1B4CF34(&static_fields->__9__16_0);
  }
  if ( !itemSortList )
    sub_1B4D1EC(v10, method);
  v15 = System_Collections_Generic_List_object___ConvertAll_object_(
          (System_Collections_Generic_List_object__o *)itemSortList,
          (System_Converter_T__TOutput__o *)_9__16_0,
          (const MethodInfo_2E391E8 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
  v16 = CGThumbnailListViewManager___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v16 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__int__o *)v16->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_CGThumbnailListItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__16_1,
      v19,
      Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_1__,
      0LL);
    v20 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v20->__9__16_1 = (struct System_Func_CGThumbnailListItem__int__o *)_9__16_1;
    sub_1B4CF34(&v20->__9__16_1);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v21,
                                                     (const MethodInfo_2F3FF5C *)Method_System_Linq_Enumerable_ToList_int___);
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

  if ( (byte_49B604B & 1) == 0 )
  {
    sub_1B4CF90(&CGThumbnailListViewManager_CallbackFunc_TypeInfo, value);
    byte_49B604B = 1;
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
    v8 = sub_1B8724C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CGThumbnailListViewManager_o *)sub_1B4D4AC(v7);
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
  sub_1B4CF34(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19950B0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1995068;
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
  if ( (byte_49B605A & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&thumbnailIndex);
    byte_49B605A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v9, callback, object);
}


void __fastcall CGThumbnailListViewManager_CallbackFunc__EndInvoke(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
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

  if ( (byte_49B605B & 1) == 0 )
  {
    sub_1B4CF90(&CGThumbnailListViewManager___c_TypeInfo, v1);
    byte_49B605B = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(CGThumbnailListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CGThumbnailListViewManager___c_TypeInfo->static_fields->__9 = (struct CGThumbnailListViewManager___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)CGThumbnailListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, 0LL);
  return x->fields.priority;
}


CGThumbnailListItem_o *__fastcall CGThumbnailListViewManager___c___JumpItemForID_b__37_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49B605E & 1) == 0 )
  {
    sub_1B4CF90(&CGThumbnailListItem_TypeInfo, x);
    byte_49B605E = 1;
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

  if ( (byte_49B605C & 1) == 0 )
  {
    sub_1B4CF90(&CGThumbnailListItem_TypeInfo, x);
    byte_49B605C = 1;
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
    sub_1B4D1EC(this, 0LL);
  return x->fields._Id_k__BackingField;
}


CGThumbnailListItem_o *__fastcall CGThumbnailListViewManager___c___get_SortGalleryIdList_b__16_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49B605D & 1) == 0 )
  {
    sub_1B4CF90(&CGThumbnailListItem_TypeInfo, x);
    byte_49B605D = 1;
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
    sub_1B4D1EC(this, 0LL);
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
  if ( (byte_49B605F & 1) == 0 )
  {
    this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)sub_1B4CF90(
                                                                   &Method_System_Collections_Generic_List_GalleryEntity__get_Item__,
                                                                   x);
    byte_49B605F = 1;
  }
  if ( !x
    || (this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)v4->fields.thumbnailEntityList) == 0LL
    || (galleryId = x->fields.galleryId,
        (this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                        (System_Collections_Generic_List_object__o *)this,
                                                                        v4->fields.i,
                                                                        (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GalleryEntity__get_Item__)) == 0LL) )
  {
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, 0LL);
  return x->fields._Id_k__BackingField == this->fields.galleryId;
}
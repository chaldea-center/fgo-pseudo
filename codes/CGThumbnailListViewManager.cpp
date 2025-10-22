void CGThumbnailListViewManager___ctor(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isCG = 257;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CGThumbnailListViewManager__ChangeIconScale(CGThumbnailListViewManager_o *this, const MethodInfo *method)
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
  if ( (byte_4C51CE8 & 1) == 0 )
  {
    this = (CGThumbnailListViewManager_o *)sub_1C3E564(&StringLiteral_7033/*"GalleryListItemScale"*/);
    byte_4C51CE8 = 1;
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
    this = (CGThumbnailListViewManager_o *)sub_1C3E508(p_seed, smallSizeSeed);
  }
  sort = v2->fields.sort;
  if ( !sort )
    goto LABEL_14;
  v9 = v2->fields.scaleType;
  sort->fields.iconScaleKind = v9;
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7033/*"GalleryListItemScale"*/, v9, 0);
  CGThumbnailListViewManager__ModifyList(v2, 1, v10);
  CGThumbnailListViewManager__SetMode(v2, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)v2, -1, 0, -1, 0);
  this = (CGThumbnailListViewManager_o *)v2->fields.scrollBar;
  if ( !this
    || (this = (CGThumbnailListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_14:
    sub_1C3E7C0(this, method);
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
  struct ListViewSort_o *sort; // x24
  __int64 Int; // x0
  __int64 v13; // x1
  UILabel_o *emptyMessageLabel; // x24
  struct ListViewSort_o *v15; // x19
  CGThumbnailListViewManager___c_c *v16; // x0
  System_Func_object__int__o *_9__26_0; // x22
  Il2CppObject *v18; // x19
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  CGThumbnailListViewManager_o *v21; // x21
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8
  System_Collections_Generic_List_object__o *v23; // x21
  System_Collections_Generic_List_object__o *v24; // x19
  int32_t size; // w2
  int v26; // w9
  struct System_Collections_Generic_List_string__o *unloadTargetPathList; // x8
  int32_t v28; // w2
  int v29; // w9
  System_Func_object__bool__o **v30; // x23
  Il2CppObject *Item; // x0
  System_Func_object__bool__o *v32; // x25
  Il2CppObject *v33; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_List_object__o *v35; // x25
  int32_t v36; // w27
  __int64 v37; // x26
  int32_t v38; // w19
  int32_t v39; // w28
  int64_t v40; // x29
  System_String_o *v41; // x1
  int v42; // w27
  Il2CppClass *klass; // d8
  int v44; // w26
  int v45; // w25
  System_String_o *v46; // x19
  __int64 v47; // x24
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x8
  struct ListViewSort_o *v52; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *scrollBar; // x19
  struct UIScrollBar_o *v56; // x8
  struct ListViewSort_o *v57; // x8
  int32_t v58; // w1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UserGameEntity_o *SelfUserGame; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-68h]

  if ( (byte_4C51CE3 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_GetValue_string___);
    sub_1C3E564(&CGThumbnailListItem_TypeInfo);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_GalleryResourceMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__getEntityList__);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_GalleryEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_GalleryEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    sub_1C3E564(&System_Func_GalleryResourceEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_GalleryEntity__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_CGThumbnailListViewManager___c__CreateList_b__26_0__);
    sub_1C3E564(&Method_CGThumbnailListViewManager___c__DisplayClass26_0__CreateList_b__1__);
    sub_1C3E564(&CGThumbnailListViewManager___c__DisplayClass26_0_TypeInfo);
    sub_1C3E564(&CGThumbnailListViewManager___c_TypeInfo);
    sub_1C3E564(&StringLiteral_7033/*"GalleryListItemScale"*/);
    sub_1C3E564(&StringLiteral_6919/*"GALLERY_NO_THUMBNAIL"*/);
    sub_1C3E564(&StringLiteral_9221/*"MyRoom/Gallery/Thumbnail/"*/);
    sub_1C3E564(&StringLiteral_7031/*"GalleryAscendingOrder"*/);
    sub_1C3E564(&StringLiteral_21429/*"maleThumbnailName"*/);
    byte_4C51CE3 = 1;
  }
  v10 = sub_1C3E7B0(CGThumbnailListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.callbackFunc = listItemCallback;
  sub_1C3E508(&this->fields.callbackFunc, listItemCallback);
  sort = this->fields.sort;
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7031/*"GalleryAscendingOrder"*/, 1, 0);
  if ( !sort )
    goto LABEL_77;
  sort->fields.isAscendingOrder = (_DWORD)Int == 1;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Int = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6919/*"GALLERY_NO_THUMBNAIL"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_77;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Int, 0);
  Int = (__int64)this->fields.sort;
  this->fields.isCG = isCgFlag;
  this->fields.isMovie = isMovieFlag;
  if ( !Int )
    goto LABEL_77;
  ListViewSort__SetFilter((ListViewSort_o *)Int, 100, isCgFlag, 0);
  Int = (__int64)this->fields.sort;
  if ( !Int )
    goto LABEL_77;
  ListViewSort__SetFilter((ListViewSort_o *)Int, 101, this->fields.isMovie, 0);
  v15 = this->fields.sort;
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7033/*"GalleryListItemScale"*/, 1, 0);
  if ( !v15 )
    goto LABEL_77;
  v15->fields.iconScaleKind = Int;
  v16 = CGThumbnailListViewManager___c_TypeInfo;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v16 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__26_0 = (System_Func_object__int__o *)v16->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__26_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_GalleryEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__26_0, v18, Method_CGThumbnailListViewManager___c__CreateList_b__26_0__, 0);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Func_GalleryEntity__int__o *)_9__26_0;
    sub_1C3E508(&static_fields->__9__26_0, _9__26_0);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)thumbnailList,
                                                               (System_Func_TSource__TKey__o *)_9__26_0,
                                                               (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_GalleryEntity__int___);
  Int = (__int64)System_Linq_Enumerable__ToList_object_(
                   v20,
                   (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_GalleryEntity___);
  if ( !v10 )
    goto LABEL_77;
  *(_QWORD *)(v10 + 16) = Int;
  Int = sub_1C3E508(v10 + 16, Int);
  v21 = this;
  thumbnailPathList = this->fields.thumbnailPathList;
  if ( !thumbnailPathList )
  {
    v23 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.thumbnailPathList = (struct System_Collections_Generic_List_string__o *)v23;
    sub_1C3E508(&this->fields.thumbnailPathList, v23);
    v21 = this;
    v24 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)v24;
    Int = sub_1C3E508(&this->fields.unloadTargetPathList, v24);
    thumbnailPathList = this->fields.thumbnailPathList;
    if ( !thumbnailPathList )
      goto LABEL_77;
  }
  size = thumbnailPathList->fields._size;
  v26 = thumbnailPathList->fields._version + 1;
  thumbnailPathList->fields._size = 0;
  thumbnailPathList->fields._version = v26;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)thumbnailPathList->fields._items, 0, size, 0);
  unloadTargetPathList = v21->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
    goto LABEL_77;
  v28 = unloadTargetPathList->fields._size;
  v29 = unloadTargetPathList->fields._version + 1;
  unloadTargetPathList->fields._size = 0;
  unloadTargetPathList->fields._version = v29;
  if ( v28 >= 1 )
    System_Array__Clear((System_Array_o *)unloadTargetPathList->fields._items, 0, v28, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Int = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  if ( !Int )
    goto LABEL_77;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  *(System_Collections_Generic_IEnumerable_TSource__o **)(Int + 40),
                                                                  (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
  Int = *(_QWORD *)(v10 + 16);
  *(_DWORD *)(v10 + 24) = 0;
  if ( !Int )
    goto LABEL_77;
  v13 = 0;
  v30 = (System_Func_object__bool__o **)(v10 + 32);
  while ( (int)v13 < *(_DWORD *)(Int + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Int,
             v13,
             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GalleryEntity__get_Item__);
    v32 = *v30;
    v33 = Item;
    if ( !*v30 )
    {
      v32 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GalleryResourceEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v32,
        (Il2CppObject *)v10,
        Method_CGThumbnailListViewManager___c__DisplayClass26_0__CreateList_b__1__,
        0);
      *(_QWORD *)(v10 + 32) = v32;
      sub_1C3E508(v10 + 32, v32);
    }
    v34 = System_Linq_Enumerable__Where_object_(
            source,
            (System_Func_TSource__bool__o *)v32,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    Int = (__int64)System_Linq_Enumerable__ToList_object_(
                     v34,
                     (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Int )
      goto LABEL_77;
    v35 = (System_Collections_Generic_List_object__o *)Int;
    if ( *(int *)(Int + 24) >= 1 )
    {
      v36 = 0;
      while ( 1 )
      {
        Int = (__int64)System_Collections_Generic_List_object___get_Item(
                         v35,
                         v36,
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
        if ( !Int )
          goto LABEL_77;
        v37 = Int;
        v38 = *(_DWORD *)(Int + 52);
        v39 = *(_DWORD *)(Int + 56);
        v40 = *(int *)(Int + 60);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(v38, v39, v40, 0, 0, 0) )
          break;
        if ( ++v36 >= v35->fields._size )
          goto LABEL_51;
      }
      Int = (__int64)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_77;
      Int = UserGameEntity__IsMale(SelfUserGame, 0);
      if ( !v33 )
        goto LABEL_77;
      v41 = (Int & 1) != 0
          ? (System_String_o *)BasicHelper__GetValue_object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)v33[2].monitor,
                                 (System_String_o *)StringLiteral_21429/*"maleThumbnailName"*/,
                                 (Il2CppObject *)v33[2].klass,
                                 (const MethodInfo_30E73E4 *)Method_BasicHelper_GetValue_string___)
          : (System_String_o *)v33[2].klass;
      v42 = *(_DWORD *)(v10 + 24);
      klass = v33[1].klass;
      v44 = *(_DWORD *)(v37 + 24);
      v45 = v35->fields._size;
      v46 = System_String__Concat_63636468((System_String_o *)StringLiteral_9221/*"MyRoom/Gallery/Thumbnail/"*/, v41, 0);
      v47 = sub_1C3E7B0(CGThumbnailListItem_TypeInfo);
      ListViewItem___ctor((ListViewItem_o *)v47, 0);
      *(_DWORD *)(v47 + 20) = v42;
      *(_QWORD *)(v47 + 120) = klass;
      *(_DWORD *)(v47 + 128) = v44;
      *(_BYTE *)(v47 + 132) = v45 > 1;
      *(_BYTE *)(v47 + 133) = 1;
      *(_QWORD *)(v47 + 136) = v46;
      sub_1C3E508(v47 + 136, v46);
      Int = (__int64)this->fields.itemList;
      if ( !Int )
        goto LABEL_77;
      v48 = *(_QWORD *)(Int + 16);
      v49 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Int + 28);
      if ( !v48 )
        goto LABEL_77;
      v50 = *(int *)(Int + 24);
      if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Int,
          (Il2CppObject *)v47,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = v48 + 8 * v50;
        *(_DWORD *)(Int + 24) = v50 + 1;
        *(_QWORD *)(v51 + 32) = v47;
        sub_1C3E508(v51 + 32, v47);
      }
    }
LABEL_51:
    Int = *(_QWORD *)(v10 + 16);
    v13 = (unsigned int)(*(_DWORD *)(v10 + 24) + 1);
    *(_DWORD *)(v10 + 24) = v13;
    if ( !Int )
      goto LABEL_77;
  }
  v52 = this->fields.sort;
  if ( !v52 )
    goto LABEL_77;
  iconScaleKind = v52->fields.iconScaleKind;
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
  sub_1C3E508(&this->fields.seed, normalSizeSeed);
LABEL_61:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    Int = (__int64)this->fields.scrollBar;
    if ( Int )
    {
      Int = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0);
      if ( Int )
      {
        Int = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Int, 0);
        if ( (Int & 1) == 0 )
          return;
        v56 = this->fields.scrollBar;
        if ( v56 )
        {
          if ( v56->fields.mSize > 0.98 )
            return;
          v57 = this->fields.sort;
          if ( v57 )
          {
            if ( v57->fields.isAscendingOrder )
            {
              v58 = 0;
            }
            else
            {
              itemSortList = this->fields.itemSortList;
              if ( !itemSortList )
                goto LABEL_77;
              v58 = itemSortList->fields._size - 1;
            }
            ListViewManager__JumpItem((ListViewManager_o *)this, v58, 0);
            Int = (__int64)this->fields.scrollBar;
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
    sub_1C3E7C0(Int, v13);
  }
}


System_String_o *CGThumbnailListViewManager__GetScaleButtonSpriteName(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C3E7C0(0, method);
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
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_TOutput__o *v16; // x21
  System_Func_object__bool__o *v17; // x22
  Il2CppObject *v18; // x0
  int32_t klass_high; // w1

  if ( (byte_4C51CEB & 1) == 0 )
  {
    sub_1C3E564(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_CGThumbnailListItem___);
    sub_1C3E564(&System_Func_CGThumbnailListItem__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_CGThumbnailListViewManager___c__JumpItemForID_b__37_0__);
    sub_1C3E564(&Method_CGThumbnailListViewManager___c__DisplayClass37_0__JumpItemForID_b__1__);
    sub_1C3E564(&CGThumbnailListViewManager___c__DisplayClass37_0_TypeInfo);
    sub_1C3E564(&CGThumbnailListViewManager___c_TypeInfo);
    byte_4C51CEB = 1;
  }
  v5 = sub_1C3E7B0(CGThumbnailListViewManager___c__DisplayClass37_0_TypeInfo);
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
            v11 = (System_Converter_TInput__TOutput__o *)sub_1C3E7B0(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
            System_Converter_object__object____ctor(
              v11,
              v12,
              Method_CGThumbnailListViewManager___c__JumpItemForID_b__37_0__,
              0);
            static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__37_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)v11;
            sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__37_0, (int32_t)v11, v14, v15);
          }
          if ( itemList )
          {
            v16 = System_Collections_Generic_List_object___ConvertAll_object_(
                    (System_Collections_Generic_List_object__o *)itemList,
                    (System_Converter_T__TOutput__o *)v11,
                    (const MethodInfo_3021090 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
            v17 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_CGThumbnailListItem__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v17,
              (Il2CppObject *)v5,
              Method_CGThumbnailListViewManager___c__DisplayClass37_0__JumpItemForID_b__1__,
              0);
            v18 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                    (System_Func_TSource__bool__o *)v17,
                    (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_CGThumbnailListItem___);
            if ( v18 )
              klass_high = HIDWORD(v18[1].klass);
            else
              klass_high = 0;
            ListViewManager__SetTopItem((ListViewManager_o *)this, klass_high, 0);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1C3E7C0(gameObject, v7);
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

  if ( (byte_4C51CE7 & 1) == 0 )
  {
    sub_1C3E564(&CGThumbnailListItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51CE7 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1C3E7C0(itemList, isIconSizeChange);
  size = itemList->fields._size;
  if ( size >= 1 && isIconSizeChange )
  {
    v7 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v7,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  const MethodInfo *v3; // x3
  struct CGThumbnailListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  unsigned int Index; // w0

  if ( (byte_4C51CEC & 1) == 0 )
  {
    sub_1C3E564(&Method_CGThumbnailListViewManager_OnClickListView__);
    byte_4C51CEC = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    v7 = Method_CGThumbnailListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_CGThumbnailListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C3E57C(Method_CGThumbnailListViewManager_OnClickListView__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3E548(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C3E7C0(v9, v10);
      Index = ListViewObject__get_Index((ListViewObject_o *)obj, 0);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        Index,
        callbackFunc->fields.method);
    }
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

  if ( (byte_4C51CEA & 1) == 0 )
  {
    sub_1C3E564(&Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__);
    sub_1C3E564(&StringLiteral_7031/*"GalleryAscendingOrder"*/);
    byte_4C51CEA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3E7C0(v5, v6);
    isAscendingOrder = sort->fields.isAscendingOrder;
    sort->fields.isAscendingOrder = !isAscendingOrder;
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7031/*"GalleryAscendingOrder"*/, !isAscendingOrder, 0);
    UnityEngine_PlayerPrefs__Save(0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void CGThumbnailListViewManager__OnCloseFullScreenView(
        CGThumbnailListViewManager_o *this,
        CGThumbnailListViewManager_CallbackFunc_o *listItemCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackFunc = listItemCallback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)listItemCallback, (int32_t)method, v3);
}


void CGThumbnailListViewManager__OnMoveEnd(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4C51CE6 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51CE6 = 1;
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
          sub_1C3E7C0(0, v7);
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

  if ( (byte_4C51CE5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_string__string__TypeInfo);
    sub_1C3E564(&Method_CGThumbnailListViewManager_SetThumbnailAssetPath__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CGThumbnailObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CGThumbnailObject__get_Count__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C51CE5 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)CGThumbnailListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_CGThumbnailObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__MoveNext__) )
    {
      current = v14.fields._current;
      scaleType = this->fields.scaleType;
      v10 = (System_Action_object__object__o *)sub_1C3E7B0(System_Action_string__string__TypeInfo);
      System_Action_object__object____ctor(
        v10,
        (Il2CppObject *)this,
        Method_CGThumbnailListViewManager_SetThumbnailAssetPath__,
        0);
      if ( !current )
        sub_1C3E7C0(v11, v12);
      CGThumbnailObject__Init(
        (CGThumbnailObject_o *)current,
        mode,
        scaleType,
        (System_Action_string__string__o *)v10,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__Dispose__);
  }
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
    sub_1C3E7C0(sort, isCg);
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

  if ( (byte_4C51CE4 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_string__string__TypeInfo);
    sub_1C3E564(&Method_CGThumbnailListViewManager_SetThumbnailAssetPath__);
    sub_1C3E564(&CGThumbnailObject_TypeInfo);
    byte_4C51CE4 = 1;
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
  v9 = (System_Action_object__object__o *)sub_1C3E7B0(System_Action_string__string__TypeInfo);
  System_Action_object__object____ctor(
    v9,
    (Il2CppObject *)this,
    Method_CGThumbnailListViewManager_SetThumbnailAssetPath__,
    0);
  if ( !obj )
    sub_1C3E7C0(v10, v11);
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

  if ( (byte_4C51CE9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_17540/*"btn_sort_up"*/);
    sub_1C3E564(&StringLiteral_17638/*"btn_txt_up"*/);
    sub_1C3E564(&StringLiteral_17589/*"btn_txt_new"*/);
    sub_1C3E564(&StringLiteral_17579/*"btn_txt_down"*/);
    sub_1C3E564(&StringLiteral_17596/*"btn_txt_old"*/);
    sub_1C3E564(&StringLiteral_17537/*"btn_sort_down"*/);
    byte_4C51CE9 = 1;
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17596/*"btn_txt_old"*/ : &StringLiteral_17589/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17537/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17540/*"btn_sort_up"*/;
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17638/*"btn_txt_up"*/ : &StringLiteral_17579/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17540/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17537/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C3E7C0(sort, v4);
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
  const MethodInfo *v10; // x3
  struct System_String_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_String_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x8
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8

  if ( (byte_4C51CEE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4C51CEE = 1;
  }
  if ( !System_String__IsNullOrEmpty(unloadTargetPath, 0) )
  {
    unloadTargetPathList = this->fields.unloadTargetPathList;
    if ( !unloadTargetPathList )
      goto LABEL_26;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)unloadTargetPathList,
            (Il2CppObject *)unloadTargetPath,
            (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      unloadTargetPathList = this->fields.unloadTargetPathList;
      if ( !unloadTargetPathList )
        goto LABEL_26;
      items = unloadTargetPathList->fields._items;
      v12 = Method_System_Collections_Generic_List_string__Add__;
      ++unloadTargetPathList->fields._version;
      if ( !items )
        goto LABEL_26;
      size = unloadTargetPathList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)unloadTargetPathList,
          (Il2CppObject *)unloadTargetPath,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        unloadTargetPathList->fields._size = size + 1;
        v14[4] = (Il2CppClass *)unloadTargetPath;
        sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)unloadTargetPath, v9, v10);
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
          (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    unloadTargetPathList = this->fields.thumbnailPathList;
    if ( unloadTargetPathList )
    {
      v17 = unloadTargetPathList->fields._items;
      v18 = Method_System_Collections_Generic_List_string__Add__;
      ++unloadTargetPathList->fields._version;
      if ( v17 )
      {
        v19 = unloadTargetPathList->fields._size;
        if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)unloadTargetPathList,
            (Il2CppObject *)loadPath,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &v17->obj.klass + v19;
          unloadTargetPathList->fields._size = v19 + 1;
          v20[4] = (Il2CppClass *)loadPath;
          sub_1C3E508((CGThumbnailListItem_o *)(v20 + 4), (int32_t)loadPath, v15, v16);
        }
        goto LABEL_19;
      }
    }
LABEL_26:
    sub_1C3E7C0(unloadTargetPathList, v7);
  }
LABEL_19:
  unloadTargetPathList = this->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
    goto LABEL_26;
  unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_Collections_Generic_List_object___Contains(
                                                                               (System_Collections_Generic_List_object__o *)unloadTargetPathList,
                                                                               (Il2CppObject *)loadPath,
                                                                               (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)unloadTargetPathList & 1) != 0 )
  {
    unloadTargetPathList = this->fields.unloadTargetPathList;
    if ( !unloadTargetPathList )
      goto LABEL_26;
    unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_Collections_Generic_List_object___Remove(
                                                                                 (System_Collections_Generic_List_object__o *)unloadTargetPathList,
                                                                                 (Il2CppObject *)loadPath,
                                                                                 (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_string__Remove__);
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
  const MethodInfo *v11; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v15; // x8
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  intptr_t v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  intptr_t v21; // x8

  v2 = this;
  if ( (byte_4C51CEF & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (CGThumbnailListViewManager_o *)sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4C51CEF = 1;
  }
  thumbnailPathList = v2->fields.thumbnailPathList;
  if ( !thumbnailPathList )
LABEL_28:
    sub_1C3E7C0(this, method);
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
                                               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !v2->fields.thumbnailPathList )
        goto LABEL_28;
      v8 = (Il2CppObject *)this;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)v2->fields.thumbnailPathList,
        (Il2CppObject *)this,
        (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_string__Remove__);
      this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
      if ( !this )
        goto LABEL_28;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)this,
        v8,
        (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_string__Remove__);
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
        v13 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_28;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v8,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v15 + 32) = v8;
          sub_1C3E508((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v8, v10, v11);
        }
        this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
        if ( !this )
          goto LABEL_28;
        v18 = this->fields.m_CachedPtr;
        v19 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v18 )
          goto LABEL_28;
        v20 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v8,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = v18 + 8 * v20;
          LODWORD(this->fields.m_CancellationTokenSource) = v20 + 1;
          *(_QWORD *)(v21 + 32) = v8;
          sub_1C3E508((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v8, v16, v17);
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

  if ( (byte_4C51CED & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4C51CED = 1;
  }
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !this->fields.thumbnailPathList )
    goto LABEL_14;
  v5 = (AssetManager_o *)Instance;
  Instance = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)this->fields.thumbnailPathList,
               (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_string__ToArray__);
  if ( !v5 )
    goto LABEL_14;
  AssetManager__CancelAndReleaseDownloadAssetStorages(v5, (System_String_array *)Instance, 0);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !this->fields.thumbnailPathList )
    goto LABEL_14;
  v6 = (AssetManager_o *)Instance;
  Instance = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)this->fields.thumbnailPathList,
               (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_string__ToArray__);
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
    sub_1C3E7C0(Instance, v4);
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

  if ( (byte_4C51CE0 & 1) == 0 )
  {
    sub_1C3E564(&CGThumbnailListViewManager_CallbackFunc_TypeInfo);
    byte_4C51CE0 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CGThumbnailListViewManager_o *)sub_1C3EA80(v7);
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
  System_Collections_Generic_List_TOutput__o *v8; // x0
  CGThumbnailListViewManager___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__int__o *_9__14_1; // x20
  Il2CppObject *v12; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4C51CDE & 1) == 0 )
  {
    sub_1C3E564(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C3E564(&System_Func_CGThumbnailListItem__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
    sub_1C3E564(&Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_0__);
    sub_1C3E564(&Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_1__);
    sub_1C3E564(&CGThumbnailListViewManager___c_TypeInfo);
    byte_4C51CDE = 1;
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
    _9__14_0 = (System_Converter_TInput__TOutput__o *)sub_1C3E7B0(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    System_Converter_object__object____ctor(
      _9__14_0,
      v6,
      Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_0__,
      0);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)_9__14_0;
    v3 = (CGThumbnailListViewManager___c_c *)sub_1C3E508(&static_fields->__9__14_0, _9__14_0);
  }
  if ( !itemList )
    sub_1C3E7C0(v3, method);
  v8 = System_Collections_Generic_List_object___ConvertAll_object_(
         (System_Collections_Generic_List_object__o *)itemList,
         (System_Converter_T__TOutput__o *)_9__14_0,
         (const MethodInfo_3021090 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
  v9 = CGThumbnailListViewManager___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v9 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__14_1 = (System_Func_object__int__o *)v9->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__14_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_CGThumbnailListItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_1,
      v12,
      Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_1__,
      0);
    v13 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v13->__9__14_1 = (struct System_Func_CGThumbnailListItem__int__o *)_9__14_1;
    sub_1C3E508(&v13->__9__14_1, _9__14_1);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v10,
                                                               (System_Func_TSource__TResult__o *)_9__14_1,
                                                               (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v14,
                                                     (const MethodInfo_313DC18 *)Method_System_Linq_Enumerable_ToList_int___);
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C51CE2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CGThumbnailObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_CGThumbnailObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CGThumbnailObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_CGThumbnailObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51CE2 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_CGThumbnailObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_CGThumbnailObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CGThumbnailObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_CGThumbnailObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_TOutput__o *v8; // x0
  CGThumbnailListViewManager___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__int__o *_9__16_1; // x20
  Il2CppObject *v12; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4C51CDF & 1) == 0 )
  {
    sub_1C3E564(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C3E564(&System_Func_CGThumbnailListItem__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
    sub_1C3E564(&Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_0__);
    sub_1C3E564(&Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_1__);
    sub_1C3E564(&CGThumbnailListViewManager___c_TypeInfo);
    byte_4C51CDF = 1;
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
    _9__16_0 = (System_Converter_TInput__TOutput__o *)sub_1C3E7B0(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    System_Converter_object__object____ctor(
      _9__16_0,
      v6,
      Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_0__,
      0);
    static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)_9__16_0;
    v3 = (CGThumbnailListViewManager___c_c *)sub_1C3E508(&static_fields->__9__16_0, _9__16_0);
  }
  if ( !itemSortList )
    sub_1C3E7C0(v3, method);
  v8 = System_Collections_Generic_List_object___ConvertAll_object_(
         (System_Collections_Generic_List_object__o *)itemSortList,
         (System_Converter_T__TOutput__o *)_9__16_0,
         (const MethodInfo_3021090 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
  v9 = CGThumbnailListViewManager___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  if ( !CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo);
    v9 = CGThumbnailListViewManager___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__int__o *)v9->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = CGThumbnailListViewManager___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_CGThumbnailListItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__16_1,
      v12,
      Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_1__,
      0);
    v13 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v13->__9__16_1 = (struct System_Func_CGThumbnailListItem__int__o *)_9__16_1;
    sub_1C3E508(&v13->__9__16_1, _9__16_1);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v10,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v14,
                                                     (const MethodInfo_313DC18 *)Method_System_Linq_Enumerable_ToList_int___);
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

  if ( (byte_4C51CE1 & 1) == 0 )
  {
    sub_1C3E564(&CGThumbnailListViewManager_CallbackFunc_TypeInfo);
    byte_4C51CE1 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CGThumbnailListViewManager_o *)sub_1C3EA80(v7);
  CGThumbnailListViewManager__get_ObjectList(v10, v11);
}


void CGThumbnailListViewManager_CallbackFunc___ctor(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7B560;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7B518;
}


System_IAsyncResult_o *CGThumbnailListViewManager_CallbackFunc__BeginInvoke(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        int32_t thumbnailIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = thumbnailIndex;
  if ( (byte_4C51CF0 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C51CF0 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void CGThumbnailListViewManager_CallbackFunc__EndInvoke(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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


void CGThumbnailListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C51CF1 & 1) == 0 )
  {
    sub_1C3E564(&CGThumbnailListViewManager___c_TypeInfo);
    byte_4C51CF1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(CGThumbnailListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CGThumbnailListViewManager___c_TypeInfo->static_fields->__9 = (struct CGThumbnailListViewManager___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)CGThumbnailListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
  return x->fields.priority;
}


CGThumbnailListItem_o *CGThumbnailListViewManager___c___JumpItemForID_b__37_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4C51CF4 & 1) == 0 )
  {
    sub_1C3E564(&CGThumbnailListItem_TypeInfo);
    byte_4C51CF4 = 1;
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

  if ( (byte_4C51CF2 & 1) == 0 )
  {
    sub_1C3E564(&CGThumbnailListItem_TypeInfo);
    byte_4C51CF2 = 1;
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
    sub_1C3E7C0(this, 0);
  return x->fields._Id_k__BackingField;
}


CGThumbnailListItem_o *CGThumbnailListViewManager___c___get_SortGalleryIdList_b__16_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4C51CF3 & 1) == 0 )
  {
    sub_1C3E564(&CGThumbnailListItem_TypeInfo);
    byte_4C51CF3 = 1;
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
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C51CF5 & 1) == 0 )
  {
    this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)sub_1C3E564(&Method_System_Collections_Generic_List_GalleryEntity__get_Item__);
    byte_4C51CF5 = 1;
  }
  if ( !x
    || (this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)v4->fields.thumbnailEntityList) == 0
    || (galleryId = x->fields.galleryId,
        (this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                        (System_Collections_Generic_List_object__o *)this,
                                                                        v4->fields.i,
                                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GalleryEntity__get_Item__)) == 0) )
  {
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
  return x->fields._Id_k__BackingField == this->fields.galleryId;
}
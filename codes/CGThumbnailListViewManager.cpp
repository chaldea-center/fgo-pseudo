void CGThumbnailListViewManager___ctor(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isCG = 257;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CGThumbnailListViewManager__ChangeIconScale(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  CGThumbnailListViewManager_o *v8; // x19
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CGThumbnailListViewManager_o *v11; // x0
  int v12; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  struct ListViewSort_o *sort; // x8
  int32_t v15; // w1
  System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  v8 = this;
  if ( (byte_596B4FE & 1) == 0 )
  {
    this = (CGThumbnailListViewManager_o *)sub_2213A60(&StringLiteral_7329/*"GalleryListItemScale"*/);
    byte_596B4FE = 1;
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = v8->fields.sort;
  if ( !sort )
    goto LABEL_14;
  v15 = v8->fields.scaleType;
  v16 = (System_String_o *)StringLiteral_7329/*"GalleryListItemScale"*/;
  sort->fields.iconScaleKind = v15;
  UnityEngine_PlayerPrefs__SetInt(v16, v15, 0);
  CGThumbnailListViewManager__ModifyList(v8, 1, v17);
  CGThumbnailListViewManager__SetMode(v8, 2, v18);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0);
  this = (CGThumbnailListViewManager_o *)v8->fields.scrollBar;
  if ( !this
    || (this = (CGThumbnailListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_14:
    sub_2213CDC(this, method);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct ListViewSort_o *sort; // x25
  void *Int; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  LocalizationManager_c *v21; // x8
  UILabel_o *emptyMessageLabel; // x24
  struct ListViewSort_o *v23; // x22
  __int64 v24; // x2
  CGThumbnailListViewManager___c_c *v25; // x0
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__26_0; // x22
  Il2CppObject *v28; // x23
  struct CGThumbnailListViewManager___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  CGThumbnailListViewManager_o *v43; // x19
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8
  System_Collections_Generic_List_object__o *v45; // x21
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_List_object__o *v52; // x21
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t size; // w2
  int v60; // w9
  struct System_Collections_Generic_List_string__o *unloadTargetPathList; // x8
  int32_t v62; // w2
  int v63; // w9
  __int64 v64; // x1
  __int64 v65; // x2
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x22
  Il2CppObject *Item; // x0
  System_Func_object__bool__o *v74; // x24
  Il2CppObject *v75; // x23
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  System_Collections_Generic_List_object__o *v83; // x24
  int32_t v84; // w26
  __int64 v85; // x2
  _DWORD *v86; // x25
  int32_t v87; // w27
  int32_t v88; // w28
  int64_t v89; // x29
  Il2CppObject *Value_object; // x1
  int v91; // w26
  int v92; // w25
  Il2CppClass *klass; // d8
  bool v94; // w27
  System_String_o *v95; // x24
  __int64 v96; // x23
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  __int64 v112; // x8
  struct ListViewSort_o *v113; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  __int64 v116; // x1
  __int64 v117; // x2
  UnityEngine_Object_o *scrollBar; // x20
  struct UIScrollBar_o *v119; // x8
  struct ListViewSort_o *v120; // x8
  int32_t v121; // w1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UserGameEntity_o *SelfUserGame; // [xsp+8h] [xbp-78h]

  if ( (byte_596B4F9 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string___);
    sub_2213A60(&CGThumbnailListItem_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GalleryResourceMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GalleryResourceMaster__GalleryResourceEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_GalleryEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_GalleryEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    sub_2213A60(&System_Func_GalleryResourceEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_GalleryEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_CGThumbnailListViewManager___c__CreateList_b__26_0__);
    sub_2213A60(&Method_CGThumbnailListViewManager___c__DisplayClass26_0__CreateList_b__1__);
    sub_2213A60(&CGThumbnailListViewManager___c__DisplayClass26_0_TypeInfo);
    sub_2213A60(&CGThumbnailListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_7329/*"GalleryListItemScale"*/);
    sub_2213A60(&StringLiteral_7212/*"GALLERY_NO_THUMBNAIL"*/);
    sub_2213A60(&StringLiteral_9605/*"MyRoom/Gallery/Thumbnail/"*/);
    sub_2213A60(&StringLiteral_7327/*"GalleryAscendingOrder"*/);
    sub_2213A60(&StringLiteral_22499/*"maleThumbnailName"*/);
    byte_596B4F9 = 1;
  }
  v10 = sub_2213CCC(CGThumbnailListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.callbackFunc = listItemCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)listItemCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  sort = this->fields.sort;
  Int = (void *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7327/*"GalleryAscendingOrder"*/, 1, 0);
  if ( !sort )
    goto LABEL_53;
  v21 = LocalizationManager_TypeInfo;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  sort->fields.isAscendingOrder = (_DWORD)Int == 1;
  if ( !*(&v21->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v21, v19, v20);
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_7212/*"GALLERY_NO_THUMBNAIL"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_53;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Int, 0);
  Int = this->fields.sort;
  this->fields.isCG = isCgFlag;
  this->fields.isMovie = isMovieFlag;
  if ( !Int )
    goto LABEL_53;
  ListViewSort__SetFilter((ListViewSort_o *)Int, 100, isCgFlag, 0);
  Int = this->fields.sort;
  if ( !Int )
    goto LABEL_53;
  ListViewSort__SetFilter((ListViewSort_o *)Int, 101, this->fields.isMovie, 0);
  v23 = this->fields.sort;
  Int = (void *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7329/*"GalleryListItemScale"*/, 1, 0);
  if ( !v23 )
    goto LABEL_53;
  v23->fields.iconScaleKind = (int)Int;
  v25 = CGThumbnailListViewManager___c_TypeInfo;
  if ( !*(&CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo, v19, v24);
    v25 = CGThumbnailListViewManager___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__26_0 = (System_Func_object__int__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !*(&v25->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v25, v19, v24);
      static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_GalleryEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__26_0, v28, Method_CGThumbnailListViewManager___c__CreateList_b__26_0__, 0);
    v29 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v29->__9__26_0 = (struct System_Func_GalleryEntity__int__o *)_9__26_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__26_0, (int32_t)_9__26_0, v30, v31, v32, v33, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)thumbnailList,
                                                               (System_Func_TSource__TKey__o *)_9__26_0,
                                                               (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_GalleryEntity__int___);
  Int = System_Linq_Enumerable__ToList_object_(
          v36,
          (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GalleryEntity___);
  if ( !v10 )
    goto LABEL_53;
  *(_QWORD *)(v10 + 16) = Int;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 16), (int32_t)Int, v37, v38, v39, v40, v41, v42);
  v43 = this;
  thumbnailPathList = this->fields.thumbnailPathList;
  if ( !thumbnailPathList )
  {
    v45 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v45,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.thumbnailPathList = (struct System_Collections_Generic_List_string__o *)v45;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.thumbnailPathList,
      (int32_t)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v43 = this;
    v52 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v52,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)v52;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.unloadTargetPathList,
      (int32_t)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    thumbnailPathList = this->fields.thumbnailPathList;
    if ( !thumbnailPathList )
      goto LABEL_53;
  }
  size = thumbnailPathList->fields._size;
  v60 = thumbnailPathList->fields._version + 1;
  thumbnailPathList->fields._size = 0;
  thumbnailPathList->fields._version = v60;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)thumbnailPathList->fields._items, 0, size, 0);
  unloadTargetPathList = v43->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
    goto LABEL_53;
  v62 = unloadTargetPathList->fields._size;
  v63 = unloadTargetPathList->fields._version + 1;
  unloadTargetPathList->fields._size = 0;
  unloadTargetPathList->fields._version = v63;
  if ( v62 >= 1 )
    System_Array__Clear((System_Array_o *)unloadTargetPathList->fields._items, 0, v62, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v64, v65);
  Int = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  if ( !Int )
    goto LABEL_53;
  v72 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                               *((System_Collections_Generic_IEnumerable_TSource__o **)Int
                                                               + 5),
                                                               (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
  Int = *(void **)(v10 + 16);
  *(_DWORD *)(v10 + 24) = 0;
  if ( !Int )
    goto LABEL_53;
  v19 = 0;
  while ( (int)v19 < *((_DWORD *)Int + 6) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Int,
             v19,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GalleryEntity__get_Item__);
    v74 = *(System_Func_object__bool__o **)(v10 + 32);
    v75 = Item;
    if ( !v74 )
    {
      v74 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GalleryResourceEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v74,
        (Il2CppObject *)v10,
        Method_CGThumbnailListViewManager___c__DisplayClass26_0__CreateList_b__1__,
        0);
      *(_QWORD *)(v10 + 32) = v74;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 32), (int32_t)v74, v76, v77, v78, v79, v80, v81);
    }
    v82 = System_Linq_Enumerable__Where_object_(
            v72,
            (System_Func_TSource__bool__o *)v74,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    Int = System_Linq_Enumerable__ToList_object_(
            v82,
            (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Int )
      goto LABEL_53;
    v83 = (System_Collections_Generic_List_object__o *)Int;
    if ( *((int *)Int + 6) >= 1 )
    {
      v84 = 0;
      while ( 1 )
      {
        Int = System_Collections_Generic_List_object___get_Item(
                v83,
                v84,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
        if ( !Int )
          goto LABEL_53;
        v86 = Int;
        v87 = *((_DWORD *)Int + 13);
        v88 = *((_DWORD *)Int + 14);
        v89 = *((int *)Int + 15);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v85);
        if ( CondType__IsOpen(v87, v88, v89, 0, 0, 0) )
          break;
        if ( ++v84 >= v83->fields._size )
          goto LABEL_52;
      }
      Int = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_53;
      Int = (void *)UserGameEntity__IsMale(SelfUserGame, 0);
      if ( ((unsigned __int8)Int & 1) != 0 )
      {
        if ( !v75 )
          goto LABEL_53;
        Value_object = BasicHelper__GetValue_object_(
                         (System_Collections_Generic_Dictionary_string__object__o *)v75[2].monitor,
                         (System_String_o *)StringLiteral_22499/*"maleThumbnailName"*/,
                         (Il2CppObject *)v75[2].klass,
                         (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_string___);
      }
      else
      {
        if ( !v75 )
          goto LABEL_53;
        Value_object = (Il2CppObject *)v75[2].klass;
      }
      v91 = *(_DWORD *)(v10 + 24);
      v92 = v86[6];
      klass = v75[1].klass;
      v94 = v83->fields._size > 1;
      v95 = System_String__Concat_75651716((System_String_o *)StringLiteral_9605/*"MyRoom/Gallery/Thumbnail/"*/, (System_String_o *)Value_object, 0);
      v96 = sub_2213CCC(CGThumbnailListItem_TypeInfo);
      ListViewItem___ctor((ListViewItem_o *)v96, 0);
      *(_DWORD *)(v96 + 20) = v91;
      *(_QWORD *)(v96 + 120) = klass;
      *(_DWORD *)(v96 + 128) = v92;
      *(_BYTE *)(v96 + 132) = v94;
      *(_BYTE *)(v96 + 133) = 1;
      *(_QWORD *)(v96 + 136) = v95;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v96 + 136), (int32_t)v95, v97, v98, v99, v100, v101, v102);
      Int = this->fields.itemList;
      if ( !Int )
        goto LABEL_53;
      v109 = *((_QWORD *)Int + 2);
      v110 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)Int + 7);
      if ( !v109 )
        goto LABEL_53;
      v111 = *((int *)Int + 6);
      if ( (unsigned int)v111 >= *(_DWORD *)(v109 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Int,
          (Il2CppObject *)v96,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
      }
      else
      {
        v112 = v109 + 8 * v111;
        *((_DWORD *)Int + 6) = v111 + 1;
        *(_QWORD *)(v112 + 32) = v96;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v112 + 32), v96, v103, v104, v105, v106, v107, v108);
      }
    }
LABEL_52:
    Int = *(void **)(v10 + 16);
    v19 = (unsigned int)(*(_DWORD *)(v10 + 24) + 1);
    *(_DWORD *)(v10 + 24) = v19;
    if ( !Int )
      goto LABEL_53;
  }
  v113 = this->fields.sort;
  if ( !v113 )
    goto LABEL_53;
  iconScaleKind = v113->fields.iconScaleKind;
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
      goto LABEL_62;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)normalSizeSeed,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
LABEL_62:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v116, v117);
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
        v119 = this->fields.scrollBar;
        if ( v119 )
        {
          if ( v119->fields.mSize > 0.98 )
            return;
          v120 = this->fields.sort;
          if ( v120 )
          {
            if ( v120->fields.isAscendingOrder )
            {
              v121 = 0;
            }
            else
            {
              itemSortList = this->fields.itemSortList;
              if ( !itemSortList )
                goto LABEL_53;
              v121 = itemSortList->fields._size - 1;
            }
            ListViewManager__JumpItem((ListViewManager_o *)this, v121, 0);
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
LABEL_53:
    sub_2213CDC(Int, v19);
  }
}


System_String_o *CGThumbnailListViewManager__GetScaleButtonSpriteName(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, method);
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
  __int64 v8; // x2
  UnityEngine_Object_o *scrollBar; // x22
  __int64 v10; // x2
  struct UIScrollBar_o *v11; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__37_0; // x22
  Il2CppObject *v15; // x23
  struct CGThumbnailListViewManager___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_TOutput__o *v23; // x21
  System_Func_object__bool__o *v24; // x22
  Il2CppObject *v25; // x0
  int32_t klass_high; // w1

  if ( (byte_596B501 & 1) == 0 )
  {
    sub_2213A60(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_CGThumbnailListItem___);
    sub_2213A60(&System_Func_CGThumbnailListItem__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_CGThumbnailListViewManager___c__JumpItemForID_b__37_0__);
    sub_2213A60(&Method_CGThumbnailListViewManager___c__DisplayClass37_0__JumpItemForID_b__1__);
    sub_2213A60(&CGThumbnailListViewManager___c__DisplayClass37_0_TypeInfo);
    sub_2213A60(&CGThumbnailListViewManager___c_TypeInfo);
    byte_596B501 = 1;
  }
  v5 = sub_2213CCC(CGThumbnailListViewManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  *(_DWORD *)(v5 + 16) = galleryId;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
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
        v11 = this->fields.scrollBar;
        if ( v11 )
        {
          if ( v11->fields.mSize > 0.98 )
            return;
          itemList = this->fields.itemList;
          gameObject = CGThumbnailListViewManager___c_TypeInfo;
          if ( !*(&CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo, v7, v10);
            gameObject = CGThumbnailListViewManager___c_TypeInfo;
          }
          static_fields = (struct CGThumbnailListViewManager___c_StaticFields *)*((_QWORD *)gameObject + 23);
          _9__37_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__37_0;
          if ( !_9__37_0 )
          {
            if ( !*((_DWORD *)gameObject + 57) )
            {
              j_il2cpp_runtime_class_init_0(gameObject, v7, v10);
              static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
            }
            v15 = (Il2CppObject *)static_fields->__9;
            _9__37_0 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
            System_Converter_object__object____ctor(
              _9__37_0,
              v15,
              Method_CGThumbnailListViewManager___c__JumpItemForID_b__37_0__,
              0);
            v16 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
            v16->__9__37_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)_9__37_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v16->__9__37_0,
              (int32_t)_9__37_0,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
          }
          if ( itemList )
          {
            v23 = System_Collections_Generic_List_object___ConvertAll_object_(
                    (System_Collections_Generic_List_object__o *)itemList,
                    (System_Converter_T__TOutput__o *)_9__37_0,
                    (const MethodInfo_36D77D0 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
            v24 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CGThumbnailListItem__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v24,
              (Il2CppObject *)v5,
              Method_CGThumbnailListViewManager___c__DisplayClass37_0__JumpItemForID_b__1__,
              0);
            v25 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                    (System_Func_TSource__bool__o *)v24,
                    (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_CGThumbnailListItem___);
            if ( v25 )
              klass_high = HIDWORD(v25[1].klass);
            else
              klass_high = 0;
            ListViewManager__SetTopItem((ListViewManager_o *)this, klass_high, 0);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_2213CDC(gameObject, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void CGThumbnailListViewManager__ModifyList(
        CGThumbnailListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  CGThumbnailListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int32_t v7; // w20
  Il2CppObject *Item; // x0
  __int64 v9; // x2
  Il2CppObject *v10; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22

  v4 = this;
  if ( (byte_596B4FD & 1) == 0 )
  {
    sub_2213A60(&CGThumbnailListItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (CGThumbnailListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B4FD = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_18;
  if ( isIconSizeChange )
  {
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        this = (CGThumbnailListViewManager_o *)v4->fields.itemList;
        if ( !this )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v7,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v10 = Item;
          naturalAligment = CGThumbnailListItem_TypeInfo->_2.naturalAligment;
          if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (CGThumbnailListItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CGThumbnailListItem_TypeInfo )
          {
            klass = (UnityEngine_Object_o *)Item[7].klass;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isIconSizeChange, v9);
            if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
            {
              this = (CGThumbnailListViewManager_o *)v10[7].klass;
              if ( !this )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)v10, v4->fields.seed, 0);
            }
          }
        }
        if ( size == ++v7 )
          return;
      }
LABEL_18:
      sub_2213CDC(this, isIconSizeChange);
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
  if ( (byte_596B502 & 1) == 0 )
  {
    this = (CGThumbnailListViewManager_o *)sub_2213A60(&Method_CGThumbnailListViewManager_OnClickListView__);
    byte_596B502 = 1;
  }
  if ( v4->fields.isInput )
  {
    if ( !obj )
      sub_2213CDC(this, obj);
    Index = ListViewObject__get_Index((ListViewObject_o *)obj, 0);
    v7 = CGThumbnailListViewManager__SelectItemCoroutine(v4, Index, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v4, v7, 0);
    v8 = Method_CGThumbnailListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_CGThumbnailListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_2213A78(Method_CGThumbnailListViewManager_OnClickListView__);
    v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
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
  _BOOL4 isAscendingOrder; // w10
  System_String_o *v9; // x0

  if ( (byte_596B500 & 1) == 0 )
  {
    sub_2213A60(&Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__);
    sub_2213A60(&StringLiteral_7327/*"GalleryAscendingOrder"*/);
    byte_596B500 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CGThumbnailListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
    isAscendingOrder = sort->fields.isAscendingOrder;
    v9 = (System_String_o *)StringLiteral_7327/*"GalleryAscendingOrder"*/;
    sort->fields.isAscendingOrder = !isAscendingOrder;
    UnityEngine_PlayerPrefs__SetInt(v9, !isAscendingOrder, 0);
    UnityEngine_PlayerPrefs__Save(0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void CGThumbnailListViewManager__OnCloseFullScreenView(
        CGThumbnailListViewManager_o *this,
        CGThumbnailListViewManager_CallbackFunc_o *listItemCallback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.callbackFunc = listItemCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)listItemCallback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CGThumbnailListViewManager__OnMoveEnd(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0

  if ( (byte_596B4FC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B4FC = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
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
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x22
  int32_t scaleType; // w21
  System_Action_object__object__o *v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  __int64 v15; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v16; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596B4FB & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__string__TypeInfo);
    sub_2213A60(&Method_CGThumbnailListViewManager_SetThumbnailAssetPath__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_CGThumbnailObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CGThumbnailObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596B4FB = 1;
  }
  memset(&v17, 0, sizeof(v17));
  ObjectList = (System_Collections_Generic_List_object__o *)CGThumbnailListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_CGThumbnailObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      ObjectList,
      v8);
    v15 = 0;
    v16 = &v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__MoveNext__) )
    {
      current = v17.fields._current;
      scaleType = this->fields.scaleType;
      v11 = (System_Action_object__object__o *)sub_2213CCC(System_Action_string__string__TypeInfo);
      System_Action_object__object____ctor(
        v11,
        (Il2CppObject *)this,
        Method_CGThumbnailListViewManager_SetThumbnailAssetPath__,
        0);
      if ( !current )
        sub_2213CDC(v12, v13);
      CGThumbnailObject__Init(
        (CGThumbnailObject_o *)current,
        mode,
        scaleType,
        (System_Action_string__string__o *)v11,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_CGThumbnailObject__Dispose__);
  }
}


System_Collections_IEnumerator_o *CGThumbnailListViewManager__SelectItemCoroutine(
        CGThumbnailListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596B503 & 1) == 0 )
  {
    sub_2213A60(&CGThumbnailListViewManager__SelectItemCoroutine_d__40_TypeInfo);
    byte_596B503 = 1;
  }
  v5 = sub_2213CCC(CGThumbnailListViewManager__SelectItemCoroutine_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
    sub_2213CDC(sort, isCg);
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

  if ( (byte_596B4FA & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__string__TypeInfo);
    sub_2213A60(&Method_CGThumbnailListViewManager_SetThumbnailAssetPath__);
    sub_2213A60(&CGThumbnailObject_TypeInfo);
    byte_596B4FA = 1;
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
  v9 = (System_Action_object__object__o *)sub_2213CCC(System_Action_string__string__TypeInfo);
  System_Action_object__object____ctor(
    v9,
    (Il2CppObject *)this,
    Method_CGThumbnailListViewManager_SetThumbnailAssetPath__,
    0);
  if ( initMode != 2 )
  {
    if ( obj )
    {
      v13 = 1;
      goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(v10, v11);
  }
  if ( !obj )
    goto LABEL_14;
  v13 = 2;
LABEL_13:
  CGThumbnailObject__Init((CGThumbnailObject_o *)obj, v13, scaleType, (System_Action_string__string__o *)v9, v12);
}


void CGThumbnailListViewManager__SetSortButtonImage(CGThumbnailListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v10; // x8
  int32_t sortKind; // w9
  System_String_o **v12; // x8
  struct ListViewSort_o *v13; // x8
  System_String_o **v14; // x9
  System_String_o **v15; // x10
  System_String_o **v16; // x8
  System_String_o **v17; // x8

  if ( (byte_596B4FF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596B4FF = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_34;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v10 = this->fields.sort;
    if ( v10 )
    {
      sortKind = v10->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v12 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v12, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              v15 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
LABEL_30:
              if ( v13->fields.isAscendingOrder )
                v17 = v14;
              else
                v17 = v15;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
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
          v16 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
              v15 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_2213CDC(sort, v5);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_String_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_String_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  struct System_Collections_Generic_List_string__o *thumbnailPathList; // x8

  if ( (byte_596B505 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_596B505 = 1;
  }
  if ( !System_String__IsNullOrEmpty(unloadTargetPath, 0) )
  {
    unloadTargetPathList = this->fields.unloadTargetPathList;
    if ( !unloadTargetPathList )
      goto LABEL_26;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)unloadTargetPathList,
            (Il2CppObject *)unloadTargetPath,
            (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__) )
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
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        unloadTargetPathList->fields._size = size + 1;
        v18[4] = (Il2CppClass *)unloadTargetPath;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v18 + 4),
          (int32_t)unloadTargetPath,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
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
          (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__) )
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &v25->obj.klass + v27;
          unloadTargetPathList->fields._size = v27 + 1;
          v28[4] = (Il2CppClass *)loadPath;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)loadPath, v19, v20, v21, v22, v23, v24);
        }
        goto LABEL_19;
      }
    }
LABEL_26:
    sub_2213CDC(unloadTargetPathList, v7);
  }
LABEL_19:
  unloadTargetPathList = this->fields.unloadTargetPathList;
  if ( !unloadTargetPathList )
    goto LABEL_26;
  unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_Collections_Generic_List_object___Contains(
                                                                               (System_Collections_Generic_List_object__o *)unloadTargetPathList,
                                                                               (Il2CppObject *)loadPath,
                                                                               (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)unloadTargetPathList & 1) != 0 )
  {
    unloadTargetPathList = this->fields.unloadTargetPathList;
    if ( !unloadTargetPathList )
      goto LABEL_26;
    unloadTargetPathList = (struct System_Collections_Generic_List_string__o *)System_Collections_Generic_List_object___Remove(
                                                                                 (System_Collections_Generic_List_object__o *)unloadTargetPathList,
                                                                                 (Il2CppObject *)loadPath,
                                                                                 (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
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
  Il2CppObject *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  AssetData_o *AssetStorage; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  intptr_t v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  intptr_t v29; // x8

  v2 = this;
  if ( (byte_596B506 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (CGThumbnailListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_596B506 = 1;
  }
  thumbnailPathList = v2->fields.thumbnailPathList;
  if ( !thumbnailPathList )
LABEL_26:
    sub_2213CDC(this, method);
  v4 = 0;
  v5 = 100;
  while ( v5 < thumbnailPathList->fields._size )
  {
    this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
    if ( !this )
      goto LABEL_26;
    if ( v4 > SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    this = (CGThumbnailListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !v2->fields.thumbnailPathList )
      goto LABEL_26;
    v6 = (Il2CppObject *)this;
    System_Collections_Generic_List_object___Remove(
      (System_Collections_Generic_List_object__o *)v2->fields.thumbnailPathList,
      (Il2CppObject *)this,
      (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
    this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
    if ( !this )
      goto LABEL_26;
    System_Collections_Generic_List_object___Remove(
      (System_Collections_Generic_List_object__o *)this,
      v6,
      (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)v6, 0);
    if ( AssetStorage )
    {
      this = (CGThumbnailListViewManager_o *)AssetData__RemoveEntryAll(AssetStorage, 0);
      thumbnailPathList = v2->fields.thumbnailPathList;
      ++v5;
      if ( !thumbnailPathList )
        goto LABEL_26;
    }
    else
    {
      this = (CGThumbnailListViewManager_o *)v2->fields.thumbnailPathList;
      if ( !this )
        goto LABEL_26;
      m_CachedPtr = this->fields.m_CachedPtr;
      v17 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_26;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          v6,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v19 + 32) = v6;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 32), (int32_t)v6, v10, v11, v12, v13, v14, v15);
      }
      this = (CGThumbnailListViewManager_o *)v2->fields.unloadTargetPathList;
      if ( !this )
        goto LABEL_26;
      v26 = this->fields.m_CachedPtr;
      v27 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v26 )
        goto LABEL_26;
      v28 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          v6,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = v26 + 8 * v28;
        LODWORD(this->fields.m_CancellationTokenSource) = v28 + 1;
        *(_QWORD *)(v29 + 32) = v6;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 32), (int32_t)v6, v20, v21, v22, v23, v24, v25);
      }
      thumbnailPathList = v2->fields.thumbnailPathList;
      ++v4;
      if ( !thumbnailPathList )
        goto LABEL_26;
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

  if ( (byte_596B504 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596B504 = 1;
  }
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !this->fields.thumbnailPathList )
    goto LABEL_14;
  v5 = (AssetManager_o *)Instance;
  Instance = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)this->fields.thumbnailPathList,
               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
  if ( !v5 )
    goto LABEL_14;
  AssetManager__CancelAndReleaseDownloadAssetStorages(v5, (System_String_array *)Instance, 0);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !this->fields.thumbnailPathList )
    goto LABEL_14;
  v6 = (AssetManager_o *)Instance;
  Instance = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)this->fields.thumbnailPathList,
               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
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
    sub_2213CDC(Instance, v4);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CGThumbnailListViewManager_o *v11; // x0
  CGThumbnailListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B4F6 & 1) == 0 )
  {
    sub_2213A60(&CGThumbnailListViewManager_CallbackFunc_TypeInfo);
    byte_596B4F6 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CGThumbnailListViewManager_CallbackFunc_c *)v6->klass != CGThumbnailListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CGThumbnailListViewManager_o *)sub_221405C(v6, CGThumbnailListViewManager_CallbackFunc_TypeInfo, v7, v8);
  CGThumbnailListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_int__o *CGThumbnailListViewManager__get_GalleryIdList(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CGThumbnailListViewManager___c_c *v4; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__14_0; // x20
  Il2CppObject *v8; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_TOutput__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  CGThumbnailListViewManager___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  struct CGThumbnailListViewManager___c_StaticFields *v21; // x9
  System_Func_object__int__o *_9__14_1; // x20
  Il2CppObject *v23; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_596B4F4 & 1) == 0 )
  {
    sub_2213A60(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&System_Func_CGThumbnailListItem__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
    sub_2213A60(&Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_0__);
    sub_2213A60(&Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_1__);
    sub_2213A60(&CGThumbnailListViewManager___c_TypeInfo);
    byte_596B4F4 = 1;
  }
  v4 = CGThumbnailListViewManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !*(&CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo, method, v2);
    v4 = CGThumbnailListViewManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__14_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    System_Converter_object__object____ctor(
      _9__14_0,
      v8,
      Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_0__,
      0);
    v9 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v9->__9__14_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)_9__14_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__14_0, (int32_t)_9__14_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !itemList )
    sub_2213CDC(v4, method);
  v16 = System_Collections_Generic_List_object___ConvertAll_object_(
          (System_Collections_Generic_List_object__o *)itemList,
          (System_Converter_T__TOutput__o *)_9__14_0,
          (const MethodInfo_36D77D0 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
  v19 = CGThumbnailListViewManager___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !*(&CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo, v17, v18);
    v19 = CGThumbnailListViewManager___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__14_1 = (System_Func_object__int__o *)v21->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17, v18);
      v21 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__14_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_CGThumbnailListItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_1,
      v23,
      Method_CGThumbnailListViewManager___c__get_GalleryIdList_b__14_1__,
      0);
    v24 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v24->__9__14_1 = (struct System_Func_CGThumbnailListItem__int__o *)_9__14_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__14_1, (int32_t)_9__14_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__14_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v31,
                                                     (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
}


System_Collections_Generic_List_CGThumbnailObject__o *CGThumbnailListViewManager__get_ObjectList(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596B4F8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CGThumbnailObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_CGThumbnailObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CGThumbnailObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CGThumbnailObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B4F8 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CGThumbnailObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CGThumbnailObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CGThumbnailObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_CGThumbnailObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CGThumbnailObject__o *)v3;
}


System_Collections_Generic_List_int__o *CGThumbnailListViewManager__get_SortGalleryIdList(
        CGThumbnailListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CGThumbnailListViewManager___c_c *v4; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x19
  struct CGThumbnailListViewManager___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__16_0; // x20
  Il2CppObject *v8; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_TOutput__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  CGThumbnailListViewManager___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  struct CGThumbnailListViewManager___c_StaticFields *v21; // x9
  System_Func_object__int__o *_9__16_1; // x20
  Il2CppObject *v23; // x21
  struct CGThumbnailListViewManager___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_596B4F5 & 1) == 0 )
  {
    sub_2213A60(&System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&System_Func_CGThumbnailListItem__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
    sub_2213A60(&Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_0__);
    sub_2213A60(&Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_1__);
    sub_2213A60(&CGThumbnailListViewManager___c_TypeInfo);
    byte_596B4F5 = 1;
  }
  v4 = CGThumbnailListViewManager___c_TypeInfo;
  itemSortList = this->fields.itemSortList;
  if ( !*(&CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo, method, v2);
    v4 = CGThumbnailListViewManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__16_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_ListViewItem__CGThumbnailListItem__TypeInfo);
    System_Converter_object__object____ctor(
      _9__16_0,
      v8,
      Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_0__,
      0);
    v9 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v9->__9__16_0 = (struct System_Converter_ListViewItem__CGThumbnailListItem__o *)_9__16_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__16_0, (int32_t)_9__16_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !itemSortList )
    sub_2213CDC(v4, method);
  v16 = System_Collections_Generic_List_object___ConvertAll_object_(
          (System_Collections_Generic_List_object__o *)itemSortList,
          (System_Converter_T__TOutput__o *)_9__16_0,
          (const MethodInfo_36D77D0 *)Method_System_Collections_Generic_List_ListViewItem__ConvertAll_CGThumbnailListItem___);
  v19 = CGThumbnailListViewManager___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !*(&CGThumbnailListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CGThumbnailListViewManager___c_TypeInfo, v17, v18);
    v19 = CGThumbnailListViewManager___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__16_1 = (System_Func_object__int__o *)v21->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17, v18);
      v21 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_CGThumbnailListItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__16_1,
      v23,
      Method_CGThumbnailListViewManager___c__get_SortGalleryIdList_b__16_1__,
      0);
    v24 = CGThumbnailListViewManager___c_TypeInfo->static_fields;
    v24->__9__16_1 = (struct System_Func_CGThumbnailListItem__int__o *)_9__16_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__16_1, (int32_t)_9__16_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_CGThumbnailListItem__int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v31,
                                                     (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
}


void CGThumbnailListViewManager__remove_callbackFunc(
        CGThumbnailListViewManager_o *this,
        CGThumbnailListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CGThumbnailListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596B4F7 & 1) == 0 )
  {
    sub_2213A60(&CGThumbnailListViewManager_CallbackFunc_TypeInfo);
    byte_596B4F7 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CGThumbnailListViewManager_CallbackFunc_c *)v6->klass != CGThumbnailListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CGThumbnailListViewManager_o *)sub_221405C(v6, CGThumbnailListViewManager_CallbackFunc_TypeInfo, v7, v8);
  CGThumbnailListViewManager__get_ObjectList(v11, v12);
}


void CGThumbnailListViewManager_CallbackFunc___ctor(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2001E68;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2001E20;
}


System_IAsyncResult_o *CGThumbnailListViewManager_CallbackFunc__BeginInvoke(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        int32_t thumbnailIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = thumbnailIndex;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void CGThumbnailListViewManager_CallbackFunc__EndInvoke(
        CGThumbnailListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct CGThumbnailListViewManager_o *_4__this; // x20
  void *p__8__1; // x0
  GalleryResourceMaster_o *v12; // x21
  System_Collections_Generic_List_object__o *EnableGalleryResourceEntityListByGalleryId; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_object__o *v20; // x21
  Il2CppObject *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *Instance; // x20
  System_String_o *AssetPath; // x23
  int32_t v30; // w21
  Il2CppObject *v31; // x24
  System_Action_o *v32; // x22
  Il2CppObject *v33; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct CGThumbnailListViewManager___c__DisplayClass40_0_o *_8__1; // x8
  struct CGThumbnailListViewManager_CallbackFunc_o *callbackFunc; // x21

  if ( (byte_596B50C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GalleryResourceMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_CGThumbnailListViewManager___c__DisplayClass40_0__SelectItemCoroutine_b__0__);
    sub_2213A60(&CGThumbnailListViewManager___c__DisplayClass40_0_TypeInfo);
    byte_596B50C = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__8__1 = &this->fields.__8__1;
    _8__1 = this->fields.__8__1;
    this->fields.__1__state = -1;
    if ( !_8__1 )
      goto LABEL_25;
    if ( !_8__1->fields.isCancel )
    {
      *(_QWORD *)p__8__1 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__8__1, 0, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_25;
LABEL_22:
      callbackFunc = _4__this->fields.callbackFunc;
      _4__this->fields.callbackFunc = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.callbackFunc, 0, v14, v15, v16, v17, v18, v19);
      if ( callbackFunc )
        ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          (unsigned int)this->fields.index,
          callbackFunc->fields.method);
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    p__8__1 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
    if ( !_4__this )
      goto LABEL_25;
    v12 = (GalleryResourceMaster_o *)p__8__1;
    p__8__1 = CGThumbnailListViewManager__get_GalleryIdList(_4__this, method);
    if ( !p__8__1 )
      goto LABEL_25;
    p__8__1 = (void *)System_Collections_Generic_List_int___get_Item(
                        (System_Collections_Generic_List_int__o *)p__8__1,
                        this->fields.index,
                        (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v12 )
      goto LABEL_25;
    EnableGalleryResourceEntityListByGalleryId = (System_Collections_Generic_List_object__o *)GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
                                                                                                v12,
                                                                                                (int32_t)p__8__1,
                                                                                                0);
    if ( EnableGalleryResourceEntityListByGalleryId )
    {
      v20 = EnableGalleryResourceEntityListByGalleryId;
      if ( EnableGalleryResourceEntityListByGalleryId->fields._size >= 1 )
      {
        p__8__1 = System_Collections_Generic_List_object___get_Item(
                    EnableGalleryResourceEntityListByGalleryId,
                    0,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
        if ( !p__8__1 )
          goto LABEL_25;
        if ( GalleryResourceEntity__GetDownloadType((GalleryResourceEntity_o *)p__8__1, 0) == 1 )
        {
          v21 = (Il2CppObject *)sub_2213CCC(CGThumbnailListViewManager___c__DisplayClass40_0_TypeInfo);
          System_Object___ctor(v21, 0);
          this->fields.__8__1 = (struct CGThumbnailListViewManager___c__DisplayClass40_0_o *)v21;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__8__1,
            (int32_t)v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          if ( this->fields.__8__1 )
          {
            this->fields.__8__1->fields.isCancel = 0;
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            p__8__1 = System_Collections_Generic_List_object___get_Item(
                        v20,
                        0,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
            if ( p__8__1 )
            {
              AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)p__8__1, 0);
              p__8__1 = System_Collections_Generic_List_object___get_Item(
                          v20,
                          0,
                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
              if ( p__8__1 )
              {
                v30 = *((_DWORD *)p__8__1 + 12);
                v31 = (Il2CppObject *)this->fields.__8__1;
                v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(
                  v32,
                  v31,
                  Method_CGThumbnailListViewManager___c__DisplayClass40_0__SelectItemCoroutine_b__0__,
                  0);
                if ( Instance )
                {
                  v33 = (Il2CppObject *)CommonUI__DownloadMovieIfNeeded(
                                          (CommonUI_o *)Instance,
                                          AssetPath,
                                          v30,
                                          -1,
                                          v32,
                                          0);
                  this->fields.__2__current = v33;
                  p__2__current = &this->fields.__2__current;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)p__2__current,
                    (int32_t)v33,
                    v35,
                    v36,
                    v37,
                    v38,
                    v39,
                    v40);
                  *((_DWORD *)p__2__current - 2) = 1;
                  return 1;
                }
              }
            }
          }
LABEL_25:
          sub_2213CDC(p__8__1, method);
        }
      }
    }
    goto LABEL_22;
  }
  return 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CGThumbnailListViewManager__SelectItemCoroutine_d__40_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B507 & 1) == 0 )
  {
    sub_2213A60(&CGThumbnailListViewManager___c_TypeInfo);
    byte_596B507 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CGThumbnailListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CGThumbnailListViewManager___c_TypeInfo->static_fields->__9 = (struct CGThumbnailListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CGThumbnailListViewManager___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


CGThumbnailListItem_o *CGThumbnailListViewManager___c___JumpItemForID_b__37_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_596B50A & 1) == 0 )
  {
    sub_2213A60(&CGThumbnailListItem_TypeInfo);
    byte_596B50A = 1;
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

  if ( (byte_596B508 & 1) == 0 )
  {
    sub_2213A60(&CGThumbnailListItem_TypeInfo);
    byte_596B508 = 1;
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
    sub_2213CDC(this, 0);
  return x->fields._Id_k__BackingField;
}


CGThumbnailListItem_o *CGThumbnailListViewManager___c___get_SortGalleryIdList_b__16_0(
        CGThumbnailListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_596B509 & 1) == 0 )
  {
    sub_2213A60(&CGThumbnailListItem_TypeInfo);
    byte_596B509 = 1;
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
    sub_2213CDC(this, 0);
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
  if ( (byte_596B50B & 1) == 0 )
  {
    this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_GalleryEntity__get_Item__);
    byte_596B50B = 1;
  }
  if ( !x
    || (this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)v4->fields.thumbnailEntityList) == 0
    || (galleryId = x->fields.galleryId,
        (this = (CGThumbnailListViewManager___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                        (System_Collections_Generic_List_object__o *)this,
                                                                        v4->fields.i,
                                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GalleryEntity__get_Item__)) == 0) )
  {
    sub_2213CDC(this, x);
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
    sub_2213CDC(this, 0);
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
        const MethodInfo *method)
{
  this->fields.isCancel = 1;
}
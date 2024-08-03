void __fastcall RoadmapBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FFF3D & 1) == 0 )
  {
    sub_1B640C8(&RoadmapBoardListViewManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20358/*"img_roadmap_"*/, v4);
    byte_49FFF3D = 1;
  }
  RoadmapBoardListViewManager_TypeInfo->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE = (struct System_String_o *)StringLiteral_20358/*"img_roadmap_"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RoadmapBoardListViewManager_TypeInfo->static_fields,
    StringLiteral_20358/*"img_roadmap_"*/,
    v2,
    v3);
}


void __fastcall RoadmapBoardListViewManager___ctor(RoadmapBoardListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


int32_t __fastcall RoadmapBoardListViewManager__CreateList(
        RoadmapBoardListViewManager_o *this,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
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
  __int64 *Master_object; // x0
  RoadmapMaster_o *v24; // x20
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o SortedExistingBoardEntityList; // kr00_16
  RoadmapEntity_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  RoadmapBoardListViewManager___c_c *v29; // x8
  System_Func_T1__T2__TResult__o *_9__1_0; // x21
  Il2CppObject *v31; // x19
  struct RoadmapBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x8
  void *v36; // x22
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 (__fastcall *v41)(void *, __int64); // x8
  void *v42; // x0
  System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c **v43; // x22
  __int64 IsDispBoard; // x0
  __int64 v45; // x23
  int32_t v46; // w28
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c *v52; // x1
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  RoadmapEntity_o *v56; // x27
  UIAtlas_o *v57; // x1
  UIAtlas_o *v58; // x26
  _BOOL8 IsDispAchieved; // x0
  System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c **v60; // x25
  int *p_achievedImageId; // x8
  int v62; // w22
  RoadmapBoardListViewManager_c *v63; // x0
  int32_t v64; // w8
  int32_t v65; // w28
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x19
  Il2CppObject *v67; // x2
  System_String_o *v68; // x0
  System_Collections_Generic_List_object__o *itemList; // x29
  int32_t tabGroup; // w25
  System_String_o *v71; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  RoadmapBoardListViewItem_o *v74; // x27
  const MethodInfo *v75; // x7
  __int64 v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  struct System_Object_array *items; // x8
  _QWORD *v80; // x9
  __int64 size; // x10
  Il2CppClass **v82; // x0
  int32_t v83; // w22
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  Il2CppObject *object; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  System_Collections_Generic_List_object__o *v91; // x20
  __int64 v92; // x21
  int32_t v93; // w2
  int32_t v94; // w3
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  BalanceConfig_c *v99; // x0
  int32_t ROADMAP_END_POINT; // w19
  RoadmapBoardListViewManager_o *v102; // [xsp+8h] [xbp-88h]
  RoadmapEntity_o *v103; // [xsp+10h] [xbp-80h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  int32_t v105; // [xsp+28h] [xbp-68h]
  int v106; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49FFF3B & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, roadmapAtlasList);
    sub_1B640C8(&CondType_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_RoadmapMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Last_ListViewItem___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Last_RoadmapEntity___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____, v10);
    sub_1B640C8(&System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v11);
    sub_1B640C8(&System_IDisposable_TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v14);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B640C8(&int_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1B640C8(&RoadmapBoardListViewItem_TypeInfo, v18);
    sub_1B640C8(&RoadmapBoardListViewManager_TypeInfo, v19);
    sub_1B640C8(&Method_RoadmapBoardListViewManager___c__CreateList_b__1_0__, v20);
    sub_1B640C8(&RoadmapBoardListViewManager___c_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_25005/*"{0}{1}"*/, v22);
    byte_49FFF3B = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64 *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_72;
  v24 = (RoadmapMaster_o *)Master_object;
  SortedExistingBoardEntityList = RoadmapMaster__GetSortedExistingBoardEntityList(
                                    (RoadmapMaster_o *)Master_object,
                                    roadmapAtlasList,
                                    0LL);
  v26 = RoadmapMaster__GetInProgressRoadmapEntity(v24, roadmapAtlasList, 0LL);
  v29 = RoadmapBoardListViewManager___c_TypeInfo;
  v103 = v26;
  if ( !RoadmapBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager___c_TypeInfo);
    v29 = RoadmapBoardListViewManager___c_TypeInfo;
  }
  _9__1_0 = (System_Func_T1__T2__TResult__o *)v29->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = RoadmapBoardListViewManager___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__1_0 = (System_Func_T1__T2__TResult__o *)sub_1B64314(
                                                  System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo,
                                                  v27,
                                                  v28);
    System_Func_object__object__ValueTuple_object__object_____ctor(
      _9__1_0,
      v31,
      Method_RoadmapBoardListViewManager___c__CreateList_b__1_0__,
      0LL);
    static_fields = RoadmapBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___o *)_9__1_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v33, v34);
  }
  Master_object = (__int64 *)System_Linq_Enumerable__Zip_object__object__ValueTuple_object__object__(
                               (System_Collections_Generic_IEnumerable_TFirst__o *)SortedExistingBoardEntityList.fields.Item1,
                               (System_Collections_Generic_IEnumerable_TSecond__o *)SortedExistingBoardEntityList.fields.Item2,
                               (System_Func_TFirst__TSecond__TResult__o *)_9__1_0,
                               (const MethodInfo_2E77C9C *)Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
  if ( !Master_object )
    goto LABEL_72;
  v35 = *Master_object;
  v36 = Master_object;
  v37 = *(unsigned __int16 *)(*Master_object + 302);
  if ( *(_WORD *)(*Master_object + 302) )
  {
    v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___c **)v38 - 1) != System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_17;
    }
    v39 = v35 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_17:
    v39 = sub_1BB60A8(
            Master_object,
            System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo,
            0LL);
  }
  v41 = *(__int64 (__fastcall **)(void *, __int64))v39;
  v40 = *(_QWORD *)(v39 + 8);
  v42 = v36;
  v43 = &System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo;
  IsDispBoard = v41(v42, v40);
  v45 = IsDispBoard;
  v105 = 0;
  v46 = 0;
  while ( 1 )
  {
    if ( !v45 )
      sub_1B64324(IsDispBoard);
    v47 = *(_QWORD *)v45;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_25;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_25:
      v50 = sub_1BB60A8(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v45, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    v51 = *(_QWORD *)v45;
    v52 = *v43;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c **)v54 - 1) != v52 )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_32;
      }
      v55 = v51 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_32:
      v55 = sub_1BB60A8(v45, v52, 0LL);
    }
    v56 = (RoadmapEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v45, *(_QWORD *)(v55 + 8));
    v58 = v57;
    IsDispBoard = RoadmapMaster__IsDispBoard(v24, v56, 0LL);
    if ( (IsDispBoard & 1) != 0 )
    {
      IsDispAchieved = RoadmapMaster__IsDispAchieved(v24, v56, 0LL);
      if ( IsDispAchieved )
      {
        if ( !v56 )
          sub_1B64324(IsDispAchieved);
        v60 = v43;
        p_achievedImageId = &v56->fields.achievedImageId;
      }
      else
      {
        if ( !v56 )
          sub_1B64324(IsDispAchieved);
        v60 = v43;
        p_achievedImageId = &v56->fields.boardImageId;
      }
      v62 = *p_achievedImageId;
      v63 = RoadmapBoardListViewManager_TypeInfo;
      v64 = v105;
      if ( v103 == v56 )
        v64 = v46;
      v105 = v64;
      if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
        v63 = RoadmapBoardListViewManager_TypeInfo;
      }
      index = v46;
      v65 = v62;
      SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v63->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
      v106 = v62;
      v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
      v68 = System_String__Format_61389768(
              (System_String_o *)StringLiteral_25005/*"{0}{1}"*/,
              SPRITE_NAME_PREFIX_BOARD_SPRITE,
              v67,
              0LL);
      v102 = this;
      v43 = v60;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      tabGroup = v56->fields.tabGroup;
      LODWORD(SPRITE_NAME_PREFIX_BOARD_SPRITE) = v56->fields.groupIndex;
      v71 = v68;
      v74 = (RoadmapBoardListViewItem_o *)sub_1B64314(RoadmapBoardListViewItem_TypeInfo, v72, v73);
      RoadmapBoardListViewItem___ctor(
        v74,
        index,
        tabGroup,
        (int32_t)SPRITE_NAME_PREFIX_BOARD_SPRITE,
        v65,
        v58,
        v71,
        v75);
      if ( !itemList )
        sub_1B64324(v76);
      items = itemList->fields._items;
      v80 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B64324(v76);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v74,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v82 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v82[4] = (Il2CppClass *)v74;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v82 + 4), (int32_t)v74, v77, v78);
      }
      this = v102;
      v46 = index + 1;
    }
  }
  v83 = v105;
  v84 = *(_QWORD *)v45;
  v85 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
  {
    v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
    {
      --v85;
      v86 += 4;
      if ( !v85 )
        goto LABEL_54;
    }
    v87 = v84 + 16LL * *v86 + 312;
  }
  else
  {
LABEL_54:
    v87 = sub_1BB60A8(v45, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v87)(v45, *(_QWORD *)(v87 + 8));
  object = System_Linq_Enumerable__Last_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)SortedExistingBoardEntityList.fields.Item1,
             (const MethodInfo_2E5EC80 *)Method_System_Linq_Enumerable_Last_RoadmapEntity___);
  if ( RoadmapMaster__IsDispBoard(v24, (RoadmapEntity_o *)object, 0LL) )
  {
    v91 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v92 = sub_1B64314(RoadmapBoardListViewItem_TypeInfo, v89, v90);
    ListViewItem___ctor_40370988((ListViewItem_o *)v92, v46, 0LL);
    *(_BYTE *)(v92 + 144) = 1;
    if ( !v91 )
      goto LABEL_72;
    v95 = v91->fields._items;
    v96 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++v91->fields._version;
    if ( !v95 )
      goto LABEL_72;
    v97 = v91->fields._size;
    if ( (unsigned int)v97 >= v95->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v91,
        (Il2CppObject *)v92,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = &v95->obj.klass + v97;
      v91->fields._size = v97 + 1;
      v98[4] = (Il2CppClass *)v92;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v98 + 4), v92, v93, v94);
    }
  }
  v99 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v99 = BalanceConfig_TypeInfo;
  }
  ROADMAP_END_POINT = v99->static_fields->ROADMAP_END_POINT;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_37285996(ROADMAP_END_POINT, -1, 0, 0LL) )
  {
    Master_object = (__int64 *)System_Linq_Enumerable__Last_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList,
                                 (const MethodInfo_2E5EC80 *)Method_System_Linq_Enumerable_Last_ListViewItem___);
    if ( !Master_object )
      goto LABEL_72;
    v83 = *((_DWORD *)Master_object + 5);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Master_object = (__int64 *)this->fields.scrollView;
  if ( !Master_object )
LABEL_72:
    sub_1B64324(Master_object);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0LL);
  return v83;
}


UIAtlas_o *__fastcall RoadmapBoardListViewManager__FindBoardAtlasById(
        int32_t boardId,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  RoadmapBoardListViewManager_c *v11; // x0
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  _BOOL8 v16; // x0
  Il2CppObject *current; // x19
  int32_t v19; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FFF3C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, roadmapAtlasList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v8);
    sub_1B640C8(&RoadmapBoardListViewManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_25005/*"{0}{1}"*/, v10);
    byte_49FFF3C = 1;
  }
  v11 = RoadmapBoardListViewManager_TypeInfo;
  memset(&v20, 0, sizeof(v20));
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v11 = RoadmapBoardListViewManager_TypeInfo;
  }
  SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v11->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
  v19 = boardId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v14 = System_String__Format_61389768(
          (System_String_o *)StringLiteral_25005/*"{0}{1}"*/,
          SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v13,
          0LL);
  if ( !roadmapAtlasList )
    sub_1B64324(v14);
  v15 = v14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v16 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1B64324(v16);
    if ( UIAtlas__GetSprite((UIAtlas_o *)v20.fields._current, v15, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return (UIAtlas_o *)current;
}


void __fastcall RoadmapBoardListViewManager__OnClickListView(
        RoadmapBoardListViewManager_o *this,
        ListViewObject_o *clickedObject,
        const MethodInfo *method)
{
  ;
}


void __fastcall RoadmapBoardListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFF3E & 1) == 0 )
  {
    sub_1B640C8(&RoadmapBoardListViewManager___c_TypeInfo, v1);
    byte_49FFF3E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RoadmapBoardListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RoadmapBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RoadmapBoardListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RoadmapBoardListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall RoadmapBoardListViewManager___c___ctor(
        RoadmapBoardListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_RoadmapEntity__UIAtlas__o __fastcall RoadmapBoardListViewManager___c___CreateList_b__1_0(
        RoadmapBoardListViewManager___c_o *this,
        RoadmapEntity_o *roadmapEntity,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  const MethodInfo_37FDA48 *v4; // x4
  struct RoadmapEntity_o *v7; // x0 OVERLAPPED
  struct UIAtlas_o *v8; // x1
  struct RoadmapEntity_o *v9; // [xsp+0h] [xbp-40h] BYREF
  struct UIAtlas_o *v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__object__o v11; // 0:x0.16
  System_ValueTuple_RoadmapEntity__UIAtlas__o result; // 0:x0.16

  if ( (byte_49FFF3F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_ValueTuple_RoadmapEntity__UIAtlas___ctor__, roadmapEntity);
    byte_49FFF3F = 1;
  }
  v11.fields.Item1 = (Il2CppObject *)&v9;
  v11.fields.Item2 = (Il2CppObject *)roadmapEntity;
  v9 = 0LL;
  v10 = 0LL;
  System_ValueTuple_object__object____ctor(
    v11,
    (Il2CppObject *)atlas,
    (Il2CppObject *)Method_System_ValueTuple_RoadmapEntity__UIAtlas___ctor__,
    v4);
  v7 = v9;
  v8 = v10;
  result.fields.Item2 = v8;
  result.fields.Item1 = v7;
  return result;
}
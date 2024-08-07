void __fastcall RoadmapBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A02660 & 1) == 0 )
  {
    sub_1B64A00(&RoadmapBoardListViewManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_20361/*"img_roadmap_"*/, v4);
    byte_4A02660 = 1;
  }
  RoadmapBoardListViewManager_TypeInfo->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE = (struct System_String_o *)StringLiteral_20361/*"img_roadmap_"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)RoadmapBoardListViewManager_TypeInfo->static_fields,
    StringLiteral_20361/*"img_roadmap_"*/,
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
  __int64 v24; // x1
  RoadmapMaster_o *v25; // x20
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o SortedExistingBoardEntityList; // kr00_16
  RoadmapEntity_o *v27; // x0
  RoadmapBoardListViewManager___c_c *v28; // x8
  System_Func_T1__T2__TResult__o *_9__1_0; // x21
  Il2CppObject *v30; // x19
  struct RoadmapBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x8
  void *v35; // x22
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 (__fastcall *v40)(void *, __int64); // x8
  void *v41; // x0
  System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c **v42; // x22
  __int64 IsDispBoard; // x0
  __int64 v44; // x1
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
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c **v64; // x25
  int *p_achievedImageId; // x8
  int v66; // w22
  RoadmapBoardListViewManager_c *v67; // x0
  int32_t v68; // w8
  int32_t v69; // w28
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x19
  Il2CppObject *v71; // x2
  System_String_o *v72; // x0
  System_Collections_Generic_List_object__o *itemList; // x29
  int32_t tabGroup; // w25
  System_String_o *v75; // x21
  RoadmapBoardListViewItem_o *v76; // x27
  const MethodInfo *v77; // x7
  __int64 v78; // x0
  __int64 v79; // x1
  int32_t v80; // w2
  int32_t v81; // w3
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  int32_t v86; // w22
  __int64 v87; // x8
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  Il2CppObject *object; // x0
  System_Collections_Generic_List_object__o *v92; // x20
  __int64 v93; // x21
  int32_t v94; // w2
  int32_t v95; // w3
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  BalanceConfig_c *v100; // x0
  int32_t ROADMAP_END_POINT; // w19
  RoadmapBoardListViewManager_o *v103; // [xsp+8h] [xbp-88h]
  RoadmapEntity_o *v104; // [xsp+10h] [xbp-80h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  int32_t v106; // [xsp+28h] [xbp-68h]
  int v107; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A0265E & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, roadmapAtlasList);
    sub_1B64A00(&CondType_TypeInfo, v5);
    sub_1B64A00(&Method_DataManager_GetMaster_RoadmapMaster___, v6);
    sub_1B64A00(&DataManager_TypeInfo, v7);
    sub_1B64A00(&Method_System_Linq_Enumerable_Last_ListViewItem___, v8);
    sub_1B64A00(&Method_System_Linq_Enumerable_Last_RoadmapEntity___, v9);
    sub_1B64A00(&Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____, v10);
    sub_1B64A00(&System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v11);
    sub_1B64A00(&System_IDisposable_TypeInfo, v12);
    sub_1B64A00(&System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v13);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v14);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B64A00(&int_TypeInfo, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1B64A00(&RoadmapBoardListViewItem_TypeInfo, v18);
    sub_1B64A00(&RoadmapBoardListViewManager_TypeInfo, v19);
    sub_1B64A00(&Method_RoadmapBoardListViewManager___c__CreateList_b__1_0__, v20);
    sub_1B64A00(&RoadmapBoardListViewManager___c_TypeInfo, v21);
    sub_1B64A00(&StringLiteral_25009/*"{0}{1}"*/, v22);
    byte_4A0265E = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64 *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_72;
  v25 = (RoadmapMaster_o *)Master_object;
  SortedExistingBoardEntityList = RoadmapMaster__GetSortedExistingBoardEntityList(
                                    (RoadmapMaster_o *)Master_object,
                                    roadmapAtlasList,
                                    0LL);
  v27 = RoadmapMaster__GetInProgressRoadmapEntity(v25, roadmapAtlasList, 0LL);
  v28 = RoadmapBoardListViewManager___c_TypeInfo;
  v104 = v27;
  if ( !RoadmapBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager___c_TypeInfo);
    v28 = RoadmapBoardListViewManager___c_TypeInfo;
  }
  _9__1_0 = (System_Func_T1__T2__TResult__o *)v28->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = RoadmapBoardListViewManager___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__1_0 = (System_Func_T1__T2__TResult__o *)sub_1B64C4C(System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    System_Func_object__object__ValueTuple_object__object_____ctor(
      _9__1_0,
      v30,
      Method_RoadmapBoardListViewManager___c__CreateList_b__1_0__,
      0LL);
    static_fields = RoadmapBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___o *)_9__1_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v32, v33);
  }
  Master_object = (__int64 *)System_Linq_Enumerable__Zip_object__object__ValueTuple_object__object__(
                               (System_Collections_Generic_IEnumerable_TFirst__o *)SortedExistingBoardEntityList.fields.Item1,
                               (System_Collections_Generic_IEnumerable_TSecond__o *)SortedExistingBoardEntityList.fields.Item2,
                               (System_Func_TFirst__TSecond__TResult__o *)_9__1_0,
                               (const MethodInfo_2E7A590 *)Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
  if ( !Master_object )
    goto LABEL_72;
  v34 = *Master_object;
  v35 = Master_object;
  v36 = *(unsigned __int16 *)(*Master_object + 302);
  if ( *(_WORD *)(*Master_object + 302) )
  {
    v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___c **)v37 - 1) != System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_17;
    }
    v38 = v34 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_17:
    v38 = sub_1BB69E0(
            Master_object,
            System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo,
            0LL);
  }
  v40 = *(__int64 (__fastcall **)(void *, __int64))v38;
  v39 = *(_QWORD *)(v38 + 8);
  v41 = v35;
  v42 = &System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo;
  IsDispBoard = v40(v41, v39);
  v45 = IsDispBoard;
  v106 = 0;
  v46 = 0;
  while ( 1 )
  {
    if ( !v45 )
      sub_1B64C5C(IsDispBoard, v44);
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
      v50 = sub_1BB69E0(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v45, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    v51 = *(_QWORD *)v45;
    v52 = *v42;
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
      v55 = sub_1BB69E0(v45, v52, 0LL);
    }
    v56 = (RoadmapEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v45, *(_QWORD *)(v55 + 8));
    v58 = v57;
    IsDispBoard = RoadmapMaster__IsDispBoard(v25, v56, 0LL);
    if ( (IsDispBoard & 1) != 0 )
    {
      IsDispAchieved = RoadmapMaster__IsDispAchieved(v25, v56, 0LL);
      if ( IsDispAchieved )
      {
        if ( !v56 )
          sub_1B64C5C(IsDispAchieved, v60);
        v64 = v42;
        p_achievedImageId = &v56->fields.achievedImageId;
      }
      else
      {
        if ( !v56 )
          sub_1B64C5C(IsDispAchieved, v60);
        v64 = v42;
        p_achievedImageId = &v56->fields.boardImageId;
      }
      v66 = *p_achievedImageId;
      v67 = RoadmapBoardListViewManager_TypeInfo;
      v68 = v106;
      if ( v104 == v56 )
        v68 = v46;
      v106 = v68;
      if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
        v67 = RoadmapBoardListViewManager_TypeInfo;
      }
      index = v46;
      v69 = v66;
      SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v67->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
      v107 = v66;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107, v61, v62, v63);
      v72 = System_String__Format_61399508(
              (System_String_o *)StringLiteral_25009/*"{0}{1}"*/,
              SPRITE_NAME_PREFIX_BOARD_SPRITE,
              v71,
              0LL);
      v103 = this;
      v42 = v64;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      tabGroup = v56->fields.tabGroup;
      LODWORD(SPRITE_NAME_PREFIX_BOARD_SPRITE) = v56->fields.groupIndex;
      v75 = v72;
      v76 = (RoadmapBoardListViewItem_o *)sub_1B64C4C(RoadmapBoardListViewItem_TypeInfo);
      RoadmapBoardListViewItem___ctor(
        v76,
        index,
        tabGroup,
        (int32_t)SPRITE_NAME_PREFIX_BOARD_SPRITE,
        v69,
        v58,
        v75,
        v77);
      if ( !itemList )
        sub_1B64C5C(v78, v79);
      items = itemList->fields._items;
      v83 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B64C5C(v78, v79);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v76,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v85[4] = (Il2CppClass *)v76;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v85 + 4), (int32_t)v76, v80, v81);
      }
      this = v103;
      v46 = index + 1;
    }
  }
  v86 = v106;
  v87 = *(_QWORD *)v45;
  v88 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
  {
    v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v89 - 1) != System_IDisposable_TypeInfo )
    {
      --v88;
      v89 += 4;
      if ( !v88 )
        goto LABEL_54;
    }
    v90 = v87 + 16LL * *v89 + 312;
  }
  else
  {
LABEL_54:
    v90 = sub_1BB69E0(v45, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v90)(v45, *(_QWORD *)(v90 + 8));
  object = System_Linq_Enumerable__Last_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)SortedExistingBoardEntityList.fields.Item1,
             (const MethodInfo_2E61574 *)Method_System_Linq_Enumerable_Last_RoadmapEntity___);
  if ( RoadmapMaster__IsDispBoard(v25, (RoadmapEntity_o *)object, 0LL) )
  {
    v92 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v93 = sub_1B64C4C(RoadmapBoardListViewItem_TypeInfo);
    ListViewItem___ctor_40376104((ListViewItem_o *)v93, v46, 0LL);
    *(_BYTE *)(v93 + 144) = 1;
    if ( !v92 )
      goto LABEL_72;
    v96 = v92->fields._items;
    v97 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++v92->fields._version;
    if ( !v96 )
      goto LABEL_72;
    v98 = v92->fields._size;
    if ( (unsigned int)v98 >= v96->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v92,
        (Il2CppObject *)v93,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
    }
    else
    {
      v99 = &v96->obj.klass + v98;
      v92->fields._size = v98 + 1;
      v99[4] = (Il2CppClass *)v93;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v99 + 4), v93, v94, v95);
    }
  }
  v100 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v100 = BalanceConfig_TypeInfo;
  }
  ROADMAP_END_POINT = v100->static_fields->ROADMAP_END_POINT;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_37290712(ROADMAP_END_POINT, -1, 0, 0LL) )
  {
    Master_object = (__int64 *)System_Linq_Enumerable__Last_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList,
                                 (const MethodInfo_2E61574 *)Method_System_Linq_Enumerable_Last_ListViewItem___);
    if ( !Master_object )
      goto LABEL_72;
    v86 = *((_DWORD *)Master_object + 5);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Master_object = (__int64 *)this->fields.scrollView;
  if ( !Master_object )
LABEL_72:
    sub_1B64C5C(Master_object, v24);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0LL);
  return v86;
}


UIAtlas_o *__fastcall RoadmapBoardListViewManager__FindBoardAtlasById(
        int32_t boardId,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  RoadmapBoardListViewManager_c *v13; // x0
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x19
  int32_t v23; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A0265F & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, roadmapAtlasList);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v8);
    sub_1B64A00(&int_TypeInfo, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    sub_1B64A00(&RoadmapBoardListViewManager_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_25009/*"{0}{1}"*/, v12);
    byte_4A0265F = 1;
  }
  v13 = RoadmapBoardListViewManager_TypeInfo;
  memset(&v24, 0, sizeof(v24));
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v13 = RoadmapBoardListViewManager_TypeInfo;
  }
  SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v13->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
  v23 = boardId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, method, v3, v4);
  v16 = System_String__Format_61399508(
          (System_String_o *)StringLiteral_25009/*"{0}{1}"*/,
          SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v15,
          0LL);
  if ( !roadmapAtlasList )
    sub_1B64C5C(v16, v17);
  v18 = v16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v19 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1B64C5C(v19, v20);
    if ( UIAtlas__GetSprite((UIAtlas_o *)v24.fields._current, v18, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A02661 & 1) == 0 )
  {
    sub_1B64A00(&RoadmapBoardListViewManager___c_TypeInfo, v1);
    byte_4A02661 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(RoadmapBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RoadmapBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RoadmapBoardListViewManager___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)RoadmapBoardListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  const MethodInfo_380033C *v4; // x4
  struct RoadmapEntity_o *v7; // x0 OVERLAPPED
  struct UIAtlas_o *v8; // x1
  struct RoadmapEntity_o *v9; // [xsp+0h] [xbp-40h] BYREF
  struct UIAtlas_o *v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__object__o v11; // 0:x0.16
  System_ValueTuple_RoadmapEntity__UIAtlas__o result; // 0:x0.16

  if ( (byte_4A02662 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_ValueTuple_RoadmapEntity__UIAtlas___ctor__, roadmapEntity);
    byte_4A02662 = 1;
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
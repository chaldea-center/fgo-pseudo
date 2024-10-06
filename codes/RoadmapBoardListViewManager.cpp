void __fastcall RoadmapBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct RoadmapBoardListViewManager_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A73993 & 1) == 0 )
  {
    sub_1B90010(&RoadmapBoardListViewManager_TypeInfo, v1);
    sub_1B90010(&StringLiteral_22617/*"prefab_roadmap_"*/, v4);
    sub_1B90010(&StringLiteral_20467/*"img_roadmap_"*/, v5);
    byte_4A73993 = 1;
  }
  RoadmapBoardListViewManager_TypeInfo->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB = (struct System_String_o *)StringLiteral_22617/*"prefab_roadmap_"*/;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)RoadmapBoardListViewManager_TypeInfo->static_fields,
    StringLiteral_22617/*"prefab_roadmap_"*/,
    v2,
    v3);
  v6 = StringLiteral_20467/*"img_roadmap_"*/;
  static_fields = RoadmapBoardListViewManager_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE = (struct System_String_o *)StringLiteral_20467/*"img_roadmap_"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE, v6, v8, v9);
}


void __fastcall RoadmapBoardListViewManager___ctor(RoadmapBoardListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


int32_t __fastcall RoadmapBoardListViewManager__CreateList(
        RoadmapBoardListViewManager_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
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
  RoadmapMaster_o *Master_object; // x0
  __int64 v22; // x1
  RoadmapMaster_o *v23; // x23
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o SortedExistingBoardEntityList; // kr00_16
  RoadmapEntity_o *v25; // x0
  RoadmapBoardListViewManager___c_c *v26; // x8
  System_Func_T1__T2__TResult__o *_9__2_0; // x20
  Il2CppObject *v28; // x19
  struct RoadmapBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  RoadmapMaster_c *klass; // x8
  RoadmapMaster_o *v33; // x20
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  __int64 IsDispBoard; // x0
  __int64 v38; // x1
  __int64 v39; // x20
  int32_t v40; // w19
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  RoadmapEntity_o *v49; // x26
  UnityEngine_Object_o *v50; // x1
  UnityEngine_Object_o *v51; // x27
  _BOOL8 IsDispAchieved; // x0
  __int64 v53; // x1
  int32_t *p_achievedImageId; // x8
  int32_t v55; // w24
  int32_t v56; // w8
  const MethodInfo *v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  bool v60; // w8
  RoadmapBoardListViewManager_c *v61; // x0
  uint32_t cctor_finished; // w9
  int32_t v63; // w22
  UnityEngine_GameObject_o *PrefabById; // x0
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t groupIndex; // w19
  int32_t tabGroup; // w29
  UnityEngine_GameObject_o *v68; // x24
  RoadmapBoardListViewItem_o *v69; // x26
  const MethodInfo *v70; // x6
  __int64 v71; // x0
  __int64 v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x0
  int32_t v79; // w28
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x19
  Il2CppObject *v81; // x2
  System_String_o *v82; // x0
  System_Collections_Generic_List_object__o *v83; // x29
  int32_t v84; // w22
  System_String_o *v85; // x24
  RoadmapBoardListViewItem_o *v86; // x26
  const MethodInfo *v87; // x7
  __int64 v88; // x0
  __int64 v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x0
  __int64 v96; // x8
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  RoadmapBoardListViewManager_o *v101; // [xsp+8h] [xbp-88h]
  RoadmapEntity_o *v102; // [xsp+10h] [xbp-80h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  int32_t v105; // [xsp+28h] [xbp-68h]
  int32_t v106; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A73990 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_RoadmapMaster___, roadmapAssetData);
    sub_1B90010(&DataManager_TypeInfo, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____, v7);
    sub_1B90010(&System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v8);
    sub_1B90010(&System_IDisposable_TypeInfo, v9);
    sub_1B90010(&System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v10);
    sub_1B90010(&System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v11);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B90010(&int_TypeInfo, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v15);
    sub_1B90010(&RoadmapBoardListViewItem_TypeInfo, v16);
    sub_1B90010(&RoadmapBoardListViewManager_TypeInfo, v17);
    sub_1B90010(&Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__, v18);
    sub_1B90010(&RoadmapBoardListViewManager___c_TypeInfo, v19);
    sub_1B90010(&StringLiteral_25146/*"{0}{1}"*/, v20);
    byte_4A73990 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RoadmapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_69;
  v23 = Master_object;
  SortedExistingBoardEntityList = RoadmapMaster__GetSortedExistingBoardEntityList(
                                    Master_object,
                                    roadmapAssetData,
                                    roadmapAtlasList,
                                    0LL);
  v25 = RoadmapMaster__GetInProgressRoadmapEntity(v23, roadmapAssetData, roadmapAtlasList, 0LL);
  v26 = RoadmapBoardListViewManager___c_TypeInfo;
  v102 = v25;
  if ( !RoadmapBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager___c_TypeInfo);
    v26 = RoadmapBoardListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T1__T2__TResult__o *)v26->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = RoadmapBoardListViewManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__2_0 = (System_Func_T1__T2__TResult__o *)sub_1B9025C(System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    System_Func_object__object__ValueTuple_object__object_____ctor(
      _9__2_0,
      v28,
      Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__,
      0LL);
    static_fields = RoadmapBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___o *)_9__2_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v30, v31);
  }
  Master_object = (RoadmapMaster_o *)System_Linq_Enumerable__Zip_object__object__ValueTuple_object__object__(
                                       (System_Collections_Generic_IEnumerable_TFirst__o *)SortedExistingBoardEntityList.fields.Item1,
                                       (System_Collections_Generic_IEnumerable_TSecond__o *)SortedExistingBoardEntityList.fields.Item2,
                                       (System_Func_TFirst__TSecond__TResult__o *)_9__2_0,
                                       (const MethodInfo_2ECD52C *)Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
  if ( !Master_object )
    goto LABEL_69;
  klass = Master_object->klass;
  v33 = Master_object;
  v34 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_17;
    }
    v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v36 = sub_1BE1FF0(
            Master_object,
            System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo,
            0LL);
  }
  IsDispBoard = (*(__int64 (__fastcall **)(RoadmapMaster_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  v39 = IsDispBoard;
  v105 = 0;
  v40 = 0;
  while ( 1 )
  {
    if ( !v39 )
      sub_1B9026C(IsDispBoard, v38);
    v41 = *(_QWORD *)v39;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_25;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_25:
      v44 = sub_1BE1FF0(v39, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v39, *(_QWORD *)(v44 + 8)) & 1) == 0 )
      break;
    v45 = *(_QWORD *)v39;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c **)v47 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_32;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_32:
      v48 = sub_1BE1FF0(v39, System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, 0LL);
    }
    v49 = (RoadmapEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v39, *(_QWORD *)(v48 + 8));
    v51 = v50;
    IsDispBoard = RoadmapMaster__IsDispBoard(v23, v49, 0LL);
    if ( (IsDispBoard & 1) != 0 )
    {
      IsDispAchieved = RoadmapMaster__IsDispAchieved(v23, v49, 0LL);
      if ( IsDispAchieved )
      {
        if ( !v49 )
          sub_1B9026C(IsDispAchieved, v53);
        p_achievedImageId = &v49->fields.achievedImageId;
      }
      else
      {
        if ( !v49 )
          sub_1B9026C(IsDispAchieved, v53);
        p_achievedImageId = &v49->fields.boardImageId;
      }
      v55 = *p_achievedImageId;
      v56 = v105;
      if ( v102 == v49 )
        v56 = v40;
      v105 = v56;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v60 = UnityEngine_Object__op_Equality(v51, 0LL, 0LL);
      v101 = this;
      index = v40;
      v61 = RoadmapBoardListViewManager_TypeInfo;
      cctor_finished = RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished;
      if ( v60 )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
        v63 = v55;
        PrefabById = RoadmapBoardListViewManager__FindPrefabById(v55, roadmapAssetData, v57);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        tabGroup = v49->fields.tabGroup;
        groupIndex = v49->fields.groupIndex;
        v68 = PrefabById;
        v69 = (RoadmapBoardListViewItem_o *)sub_1B9025C(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor_45354968(v69, index, tabGroup, groupIndex, v63, v68, v70);
        if ( !itemList )
          sub_1B9026C(v71, v72);
        items = itemList->fields._items;
        v76 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B9026C(v71, v72);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v69,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
        }
        else
        {
          v78 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v78[4] = (Il2CppClass *)v69;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v78 + 4), (int32_t)v69, v73, v74);
        }
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
          v61 = RoadmapBoardListViewManager_TypeInfo;
        }
        v79 = v55;
        SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v61->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
        v106 = v55;
        v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106, v57, v58, v59);
        v82 = System_String__Format_61801464(
                (System_String_o *)StringLiteral_25146/*"{0}{1}"*/,
                SPRITE_NAME_PREFIX_BOARD_SPRITE,
                v81,
                0LL);
        v83 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        LODWORD(SPRITE_NAME_PREFIX_BOARD_SPRITE) = v49->fields.tabGroup;
        v84 = v49->fields.groupIndex;
        v85 = v82;
        v86 = (RoadmapBoardListViewItem_o *)sub_1B9025C(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor(
          v86,
          index,
          (int32_t)SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v84,
          v79,
          (UIAtlas_o *)v51,
          v85,
          v87);
        if ( !v83 )
          sub_1B9026C(v88, v89);
        v92 = v83->fields._items;
        v93 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v83->fields._version;
        if ( !v92 )
          sub_1B9026C(v88, v89);
        v94 = v83->fields._size;
        if ( (unsigned int)v94 >= v92->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v83,
            (Il2CppObject *)v86,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
        }
        else
        {
          v95 = &v92->obj.klass + v94;
          v83->fields._size = v94 + 1;
          v95[4] = (Il2CppClass *)v86;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v95 + 4), (int32_t)v86, v90, v91);
        }
      }
      this = v101;
      v40 = index + 1;
    }
  }
  v96 = *(_QWORD *)v39;
  v97 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
  {
    v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
    {
      --v97;
      v98 += 4;
      if ( !v97 )
        goto LABEL_64;
    }
    v99 = v96 + 16LL * *v98 + 312;
  }
  else
  {
LABEL_64:
    v99 = sub_1BE1FF0(v39, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v99)(v39, *(_QWORD *)(v99 + 8));
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Master_object = (RoadmapMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_69:
    sub_1B9026C(Master_object, v22);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0LL);
  return v105;
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

  if ( (byte_4A73992 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, roadmapAtlasList);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v8);
    sub_1B90010(&int_TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    sub_1B90010(&RoadmapBoardListViewManager_TypeInfo, v11);
    sub_1B90010(&StringLiteral_25146/*"{0}{1}"*/, v12);
    byte_4A73992 = 1;
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
  v16 = System_String__Format_61801464(
          (System_String_o *)StringLiteral_25146/*"{0}{1}"*/,
          SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v15,
          0LL);
  if ( !roadmapAtlasList )
    sub_1B9026C(v16, v17);
  v18 = v16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v19 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1B9026C(v19, v20);
    if ( UIAtlas__GetSprite((UIAtlas_o *)v24.fields._current, v18, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return (UIAtlas_o *)current;
}


UnityEngine_GameObject_o *__fastcall RoadmapBoardListViewManager__FindPrefabById(
        int32_t boardId,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  RoadmapBoardListViewManager_c *v10; // x0
  Il2CppObject *PREFAB_NAME_PREFIX_BOARD_PREFAB; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A73991 & 1) == 0 )
  {
    sub_1B90010(&Method_AssetData_GetObject_GameObject____76169496, roadmapAssetData);
    sub_1B90010(&int_TypeInfo, v7);
    sub_1B90010(&RoadmapBoardListViewManager_TypeInfo, v8);
    sub_1B90010(&StringLiteral_25146/*"{0}{1}"*/, v9);
    byte_4A73991 = 1;
  }
  v10 = RoadmapBoardListViewManager_TypeInfo;
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v10 = RoadmapBoardListViewManager_TypeInfo;
  }
  PREFAB_NAME_PREFIX_BOARD_PREFAB = (Il2CppObject *)v10->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB;
  v16 = boardId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, method, v3, v4);
  v13 = System_String__Format_61801464(
          (System_String_o *)StringLiteral_25146/*"{0}{1}"*/,
          PREFAB_NAME_PREFIX_BOARD_PREFAB,
          v12,
          0LL);
  if ( !roadmapAssetData )
    sub_1B9026C(v13, v14);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48695184(
                                       roadmapAssetData,
                                       v13,
                                       (const MethodInfo_2E70790 *)Method_AssetData_GetObject_GameObject____76169496);
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

  if ( (byte_4A73994 & 1) == 0 )
  {
    sub_1B90010(&RoadmapBoardListViewManager___c_TypeInfo, v1);
    byte_4A73994 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(RoadmapBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RoadmapBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RoadmapBoardListViewManager___c_o *)v2;
  sub_1B8FFB4(
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
System_ValueTuple_RoadmapEntity__UIAtlas__o __fastcall RoadmapBoardListViewManager___c___CreateList_b__2_0(
        RoadmapBoardListViewManager___c_o *this,
        RoadmapEntity_o *roadmapEntity,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  const MethodInfo_385FAB0 *v4; // x4
  struct RoadmapEntity_o *v7; // x0 OVERLAPPED
  struct UIAtlas_o *v8; // x1
  struct RoadmapEntity_o *v9; // [xsp+0h] [xbp-40h] BYREF
  struct UIAtlas_o *v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__object__o v11; // 0:x0.16
  System_ValueTuple_RoadmapEntity__UIAtlas__o result; // 0:x0.16

  if ( (byte_4A73995 & 1) == 0 )
  {
    sub_1B90010(&Method_System_ValueTuple_RoadmapEntity__UIAtlas___ctor__, roadmapEntity);
    byte_4A73995 = 1;
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
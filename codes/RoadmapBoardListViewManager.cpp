void __fastcall RoadmapBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  struct RoadmapBoardListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4B10FAC & 1) == 0 )
  {
    sub_1BCA7E0(&RoadmapBoardListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_22826/*"prefab_roadmap_"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_20658/*"img_roadmap_"*/, v5, v6);
    byte_4B10FAC = 1;
  }
  RoadmapBoardListViewManager_TypeInfo->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB = (struct System_String_o *)StringLiteral_22826/*"prefab_roadmap_"*/;
  sub_1BCA784(RoadmapBoardListViewManager_TypeInfo->static_fields, StringLiteral_22826/*"prefab_roadmap_"*/);
  v7 = StringLiteral_20658/*"img_roadmap_"*/;
  static_fields = RoadmapBoardListViewManager_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE = (struct System_String_o *)StringLiteral_20658/*"img_roadmap_"*/;
  sub_1BCA784(&static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE, v7);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  RoadmapMaster_o *Master_object; // x0
  __int64 v38; // x1
  RoadmapMaster_o *v39; // x23
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o SortedExistingBoardEntityList; // kr00_16
  RoadmapEntity_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  RoadmapBoardListViewManager___c_c *v45; // x8
  System_Func_T1__T2__TResult__o *_9__2_0; // x20
  Il2CppObject *v47; // x19
  struct RoadmapBoardListViewManager___c_StaticFields *static_fields; // x0
  RoadmapMaster_c *klass; // x8
  RoadmapMaster_o *v50; // x20
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 v53; // x0
  __int64 IsDispBoard; // x0
  __int64 v55; // x1
  __int64 v56; // x20
  int32_t v57; // w19
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  RoadmapEntity_o *v66; // x26
  UnityEngine_Object_o *v67; // x1
  UnityEngine_Object_o *v68; // x27
  _BOOL8 IsDispAchieved; // x0
  __int64 v70; // x1
  int32_t *p_achievedImageId; // x8
  int32_t v72; // w24
  int32_t v73; // w8
  __int64 v74; // x1
  const MethodInfo *v75; // x2
  bool v76; // w8
  RoadmapBoardListViewManager_c *v77; // x0
  uint32_t cctor_finished; // w9
  int32_t v79; // w22
  UnityEngine_GameObject_o *PrefabById; // x0
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t groupIndex; // w19
  int32_t tabGroup; // w29
  UnityEngine_GameObject_o *v84; // x24
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  RoadmapBoardListViewItem_o *v88; // x26
  const MethodInfo *v89; // x6
  __int64 v90; // x0
  __int64 v91; // x1
  struct System_Object_array *items; // x8
  _QWORD *v93; // x9
  __int64 size; // x10
  Il2CppClass **v95; // x0
  int32_t v96; // w28
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x19
  Il2CppObject *v98; // x2
  System_String_o *v99; // x0
  System_Collections_Generic_List_object__o *v100; // x29
  int32_t v101; // w22
  System_String_o *v102; // x24
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  RoadmapBoardListViewItem_o *v106; // x26
  const MethodInfo *v107; // x7
  __int64 v108; // x0
  __int64 v109; // x1
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  Il2CppClass **v113; // x0
  __int64 v114; // x8
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  RoadmapBoardListViewManager_o *v119; // [xsp+8h] [xbp-88h]
  RoadmapEntity_o *v120; // [xsp+10h] [xbp-80h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  int32_t v123; // [xsp+28h] [xbp-68h]
  int32_t v124; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B10FA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RoadmapMaster___, roadmapAssetData, roadmapAtlasList);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____,
      v8,
      v9);
    sub_1BCA7E0(&System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v10, v11);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v18, v19);
    sub_1BCA7E0(&int_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&RoadmapBoardListViewItem_TypeInfo, v26, v27);
    sub_1BCA7E0(&RoadmapBoardListViewManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__, v30, v31);
    sub_1BCA7E0(&RoadmapBoardListViewManager___c_TypeInfo, v32, v33);
    sub_1BCA7E0(&StringLiteral_25361/*"{0}{1}"*/, v34, v35);
    byte_4B10FA9 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
  Master_object = (RoadmapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_69;
  v39 = Master_object;
  SortedExistingBoardEntityList = RoadmapMaster__GetSortedExistingBoardEntityList(
                                    Master_object,
                                    roadmapAssetData,
                                    roadmapAtlasList,
                                    0LL);
  v41 = RoadmapMaster__GetInProgressRoadmapEntity(v39, roadmapAssetData, roadmapAtlasList, 0LL);
  v45 = RoadmapBoardListViewManager___c_TypeInfo;
  v120 = v41;
  if ( !RoadmapBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager___c_TypeInfo, v42);
    v45 = RoadmapBoardListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T1__T2__TResult__o *)v45->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45, v42);
      v45 = RoadmapBoardListViewManager___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v45->static_fields->__9;
    _9__2_0 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                  System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo,
                                                  v42,
                                                  v43,
                                                  v44);
    System_Func_object__object__ValueTuple_object__object_____ctor(
      _9__2_0,
      v47,
      Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__,
      0LL);
    static_fields = RoadmapBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___o *)_9__2_0;
    sub_1BCA784(&static_fields->__9__2_0, _9__2_0);
  }
  Master_object = (RoadmapMaster_o *)System_Linq_Enumerable__Zip_object__object__ValueTuple_object__object__(
                                       (System_Collections_Generic_IEnumerable_TFirst__o *)SortedExistingBoardEntityList.fields.Item1,
                                       (System_Collections_Generic_IEnumerable_TSecond__o *)SortedExistingBoardEntityList.fields.Item2,
                                       (System_Func_TFirst__TSecond__TResult__o *)_9__2_0,
                                       (const MethodInfo_2F52494 *)Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
  if ( !Master_object )
    goto LABEL_69;
  klass = Master_object->klass;
  v50 = Master_object;
  v51 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
    {
      --v51;
      p_offset += 4;
      if ( !v51 )
        goto LABEL_17;
    }
    v53 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v53 = sub_1C1C7C0(
            Master_object,
            System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo,
            0LL);
  }
  IsDispBoard = (*(__int64 (__fastcall **)(RoadmapMaster_o *, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
  v56 = IsDispBoard;
  v123 = 0;
  v57 = 0;
  while ( 1 )
  {
    if ( !v56 )
      sub_1BCAA3C(IsDispBoard, v55);
    v58 = *(_QWORD *)v56;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_25;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_25:
      v61 = sub_1C1C7C0(v56, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v56, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    v62 = *(_QWORD *)v56;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c **)v64 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_32;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_32:
      v65 = sub_1C1C7C0(v56, System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, 0LL);
    }
    v66 = (RoadmapEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v56, *(_QWORD *)(v65 + 8));
    v68 = v67;
    IsDispBoard = RoadmapMaster__IsDispBoard(v39, v66, 0LL);
    if ( (IsDispBoard & 1) != 0 )
    {
      IsDispAchieved = RoadmapMaster__IsDispAchieved(v39, v66, 0LL);
      if ( IsDispAchieved )
      {
        if ( !v66 )
          sub_1BCAA3C(IsDispAchieved, v70);
        p_achievedImageId = &v66->fields.achievedImageId;
      }
      else
      {
        if ( !v66 )
          sub_1BCAA3C(IsDispAchieved, v70);
        p_achievedImageId = &v66->fields.boardImageId;
      }
      v72 = *p_achievedImageId;
      v73 = v123;
      if ( v120 == v66 )
        v73 = v57;
      v123 = v73;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
      v76 = UnityEngine_Object__op_Equality(v68, 0LL, 0LL);
      v119 = this;
      index = v57;
      v77 = RoadmapBoardListViewManager_TypeInfo;
      cctor_finished = RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished;
      if ( v76 )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo, v74);
        v79 = v72;
        PrefabById = RoadmapBoardListViewManager__FindPrefabById(v72, roadmapAssetData, v75);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        tabGroup = v66->fields.tabGroup;
        groupIndex = v66->fields.groupIndex;
        v84 = PrefabById;
        v88 = (RoadmapBoardListViewItem_o *)sub_1BCAA2C(RoadmapBoardListViewItem_TypeInfo, v85, v86, v87);
        RoadmapBoardListViewItem___ctor_30899508(v88, index, tabGroup, groupIndex, v79, v84, v89);
        if ( !itemList )
          sub_1BCAA3C(v90, v91);
        items = itemList->fields._items;
        v93 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1BCAA3C(v90, v91);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v88,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
        }
        else
        {
          v95 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v95[4] = (Il2CppClass *)v88;
          IsDispBoard = sub_1BCA784(v95 + 4, v88);
        }
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo, v74);
          v77 = RoadmapBoardListViewManager_TypeInfo;
        }
        v96 = v72;
        SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v77->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
        v124 = v72;
        v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124);
        v99 = System_String__Format_62415592(
                (System_String_o *)StringLiteral_25361/*"{0}{1}"*/,
                SPRITE_NAME_PREFIX_BOARD_SPRITE,
                v98,
                0LL);
        v100 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        LODWORD(SPRITE_NAME_PREFIX_BOARD_SPRITE) = v66->fields.tabGroup;
        v101 = v66->fields.groupIndex;
        v102 = v99;
        v106 = (RoadmapBoardListViewItem_o *)sub_1BCAA2C(RoadmapBoardListViewItem_TypeInfo, v103, v104, v105);
        RoadmapBoardListViewItem___ctor(
          v106,
          index,
          (int32_t)SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v101,
          v96,
          (UIAtlas_o *)v68,
          v102,
          v107);
        if ( !v100 )
          sub_1BCAA3C(v108, v109);
        v110 = v100->fields._items;
        v111 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v100->fields._version;
        if ( !v110 )
          sub_1BCAA3C(v108, v109);
        v112 = v100->fields._size;
        if ( (unsigned int)v112 >= v110->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v100,
            (Il2CppObject *)v106,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
        }
        else
        {
          v113 = &v110->obj.klass + v112;
          v100->fields._size = v112 + 1;
          v113[4] = (Il2CppClass *)v106;
          IsDispBoard = sub_1BCA784(v113 + 4, v106);
        }
      }
      this = v119;
      v57 = index + 1;
    }
  }
  v114 = *(_QWORD *)v56;
  v115 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
  {
    v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v116 - 1) != System_IDisposable_TypeInfo )
    {
      --v115;
      v116 += 4;
      if ( !v115 )
        goto LABEL_64;
    }
    v117 = v114 + 16LL * *v116 + 312;
  }
  else
  {
LABEL_64:
    v117 = sub_1C1C7C0(v56, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v117)(v56, *(_QWORD *)(v117 + 8));
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Master_object = (RoadmapMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_69:
    sub_1BCAA3C(Master_object, v38);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0LL);
  return v123;
}


UIAtlas_o *__fastcall RoadmapBoardListViewManager__FindBoardAtlasById(
        int32_t boardId,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  RoadmapBoardListViewManager_c *v17; // x0
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x19
  int32_t v27; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B10FAB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, roadmapAtlasList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&RoadmapBoardListViewManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_25361/*"{0}{1}"*/, v15, v16);
    byte_4B10FAB = 1;
  }
  v17 = RoadmapBoardListViewManager_TypeInfo;
  memset(&v28, 0, sizeof(v28));
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo, roadmapAtlasList);
    v17 = RoadmapBoardListViewManager_TypeInfo;
  }
  SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v17->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
  v27 = boardId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v20 = System_String__Format_62415592(
          (System_String_o *)StringLiteral_25361/*"{0}{1}"*/,
          SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v19,
          0LL);
  if ( !roadmapAtlasList )
    sub_1BCAA3C(v20, v21);
  v22 = v20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v23 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      sub_1BCAA3C(v23, v24);
    if ( UIAtlas__GetSprite((UIAtlas_o *)v28.fields._current, v22, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return (UIAtlas_o *)current;
}


UnityEngine_GameObject_o *__fastcall RoadmapBoardListViewManager__FindPrefabById(
        int32_t boardId,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  RoadmapBoardListViewManager_c *v11; // x0
  Il2CppObject *PREFAB_NAME_PREFIX_BOARD_PREFAB; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B10FAA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, roadmapAssetData, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&RoadmapBoardListViewManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_25361/*"{0}{1}"*/, v9, v10);
    byte_4B10FAA = 1;
  }
  v11 = RoadmapBoardListViewManager_TypeInfo;
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo, roadmapAssetData);
    v11 = RoadmapBoardListViewManager_TypeInfo;
  }
  PREFAB_NAME_PREFIX_BOARD_PREFAB = (Il2CppObject *)v11->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB;
  v17 = boardId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14 = System_String__Format_62415592(
          (System_String_o *)StringLiteral_25361/*"{0}{1}"*/,
          PREFAB_NAME_PREFIX_BOARD_PREFAB,
          v13,
          0LL);
  if ( !roadmapAssetData )
    sub_1BCAA3C(v14, v15);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49237568(
                                       roadmapAssetData,
                                       v14,
                                       (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B10FAD & 1) == 0 )
  {
    sub_1BCA7E0(&RoadmapBoardListViewManager___c_TypeInfo, v1, v2);
    byte_4B10FAD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RoadmapBoardListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RoadmapBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RoadmapBoardListViewManager___c_o *)v4;
  sub_1BCA784(RoadmapBoardListViewManager___c_TypeInfo->static_fields, v4);
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
  const MethodInfo_38F6AA0 *v4; // x4
  struct RoadmapEntity_o *v7; // x0 OVERLAPPED
  struct UIAtlas_o *v8; // x1
  struct RoadmapEntity_o *v9; // [xsp+0h] [xbp-40h] BYREF
  struct UIAtlas_o *v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__object__o v11; // 0:x0.16
  System_ValueTuple_RoadmapEntity__UIAtlas__o result; // 0:x0.16

  if ( (byte_4B10FAE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_ValueTuple_RoadmapEntity__UIAtlas___ctor__, roadmapEntity, atlas);
    byte_4B10FAE = 1;
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